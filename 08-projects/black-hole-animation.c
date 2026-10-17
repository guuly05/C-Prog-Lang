#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <time.h> // nanosleep header

#define WIDTH 80
#define HEIGHT 40
#define FRAMES 500

// Gravitational constant and black hole mass for scaling
#define G 6.674e-11
#define M 1e38

// Function to map intensity and velocity to a color
void set_color_disk(double intensity, double velocity_factor) {
    int r, g, b;

    // Use a blue-to-white-to-red gradient for the disk based on Doppler shift
    if (velocity_factor > 0) { // Approaching side (blue shift)
        r = (int)(255 * (1 - velocity_factor));
        g = (int)(255 * (1 - velocity_factor));
        b = (int)(255 * intensity);
    } else { // Receding side (red shift)
        r = (int)(255 * intensity);
        g = (int)(128 * intensity);
        b = (int)(64 * (1 - velocity_factor));
    }

    // Ensure color values are within the valid range [0, 255]
    r = (r > 255) ? 255 : (r < 0) ? 0 : r;
    g = (g > 255) ? 255 : (g < 0) ? 0 : g;
    b = (b > 255) ? 255 : (b < 0) ? 0 : b;
    
    printf("\033[38;2;%d;%d;%dm", r, g, b);
}

// Function to get the color and character for a star
void set_color_star(int frame, int x, int y) {
    // Make stars flicker and have a slight hue change
    double star_flicker = 0.5 + 0.5 * sin((double)frame * 0.2 + (double)x + (double)y);
    int brightness = (int)(star_flicker * 10) + 235; // Grayscale 235-245
    printf("\033[38;5;%dm.\033[0m", brightness);
}

int main() {
    srand(time(NULL));

    double cx = WIDTH / 2.0;
    double cy = HEIGHT / 2.0;

    // Parameters for the black hole and accretion disk
    double schwarzschild_radius = 10;
    double disk_inner_radius = schwarzschild_radius * 1.5;
    double disk_outer_radius = schwarzschild_radius * 4.0;
    double inclination_angle = 75.0 * M_PI / 180.0; // Disk inclination (75 degrees)

    // Precompute a fixed set of star positions
    int star_count = WIDTH * HEIGHT / 20;
    int stars_x[star_count];
    int stars_y[star_count];
    for (int i = 0; i < star_count; i++) {
        stars_x[i] = rand() % WIDTH;
        stars_y[i] = rand() % HEIGHT;
    }

    // Use a timespec struct for nanosleep
    struct timespec ts;
    ts.tv_sec = 0;
    ts.tv_nsec = 50000000; // 50 milliseconds in nanoseconds

    for (int frame = 0; frame < FRAMES; frame++) {
        printf("\033[H\033[J"); // Clear screen

        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                double dx = (double)x - cx;
                double dy = ((double)y - cy) * 2.0; // compensate char height

                double original_r = sqrt(dx * dx + dy * dy);
                double original_angle = atan2(dy, dx);

                // Simple gravitational lensing approximation
                // Bending angle is more significant closer to the event horizon
                double bending_angle = schwarzschild_radius / original_r;
                double distorted_r = sqrt(original_r * original_r + bending_angle * bending_angle * 10);
                double distorted_angle = original_angle + bending_angle;
                
                double lensed_dx = distorted_r * cos(distorted_angle);
                double lensed_dy = distorted_r * sin(distorted_angle);

                double r = sqrt(lensed_dx * lensed_dx + lensed_dy * lensed_dy);
                double angle = atan2(lensed_dy, lensed_dx);

                // Accretion disk logic
                if (r < schwarzschild_radius) {
                    // Inside the black hole
                    printf("\033[40m ");
                } else if (r >= disk_inner_radius && r <= disk_outer_radius) {
                    // This is the accretion disk. Calculate its properties.
                    double disk_distance_from_center = (r - disk_inner_radius) / (disk_outer_radius - disk_inner_radius);

                    // Doppler shift calculation based on disk rotation and inclination
                    double rotational_velocity_term = sqrt(G * M / pow(r, 3)) * cos(angle);
                    double velocity_factor = sin(inclination_angle) * rotational_velocity_term;

                    double intensity = 1.0 - (fabs(r - (disk_inner_radius + disk_outer_radius) / 2.0) / (disk_outer_radius - disk_inner_radius) * 2.0);
                    intensity = intensity < 0 ? 0 : intensity;

                    set_color_disk(intensity, velocity_factor);

                    // Choose character based on intensity
                    if (intensity > 0.8) {
                        putchar('#');
                    } else if (intensity > 0.5) {
                        putchar('*');
                    } else {
                        putchar('.');
                    }
                    printf("\033[0m");
                } else {
                    // Outside the black hole and disk (stars)
                    int is_star = 0;
                    for (int s = 0; s < star_count; s++) {
                        if (stars_x[s] == x && stars_y[s] == y) {
                            is_star = 1;
                            break;
                        }
                    }
                    if (is_star) {
                        set_color_star(frame, x, y);
                    } else {
                        putchar(' ');
                    }
                }
            }
            putchar('\n');
        }
        nanosleep(&ts, NULL);
    }
    return 0;
}
