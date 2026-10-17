#include <stdio.h>

int main() {
    int windSpeed;
    
    printf("Enter the wind speed (mph): ");
    scanf("%d", &windSpeed);
    
    if (windSpeed < 25) {
        printf("not a strong wind\n");
    } else if (windSpeed <= 38) {
        printf("strong wind\n");
    } else if (windSpeed <= 54) {
        printf("gale\n");
    } else if (windSpeed <= 72) {
        printf("whole gale\n");
    } else {
        printf("hurricane\n");
    }
    
    return 0;
}
