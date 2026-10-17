#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    char figure;
    float side, radius, area;

    printf("Enter the first letter of the figure (S for Square, C for Circle): ");
    scanf("%c", &figure);

    if (figure == 'S') {
        printf("Enter the side length of the square: ");
        scanf("%f", &side);
        area = side * side;
        printf("The area of the square is: %.2f\n", area);
    } else if (figure == 'C') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area = PI * radius * radius;
        printf("The area of the circle is: %.2f\n", area);
    } else {
        printf("Invalid figure. Please enter 'S' for Square or 'C' for Circle.\n");
    }

    return 0;
}
