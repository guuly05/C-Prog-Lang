#include <stdio.h>

int main() {
    int watts, lumens;

    printf("Enter the wattage of the light bulb: ");
    scanf("%d", &watts);

    switch (watts) {
        case 25:
            lumens = 230;
            break;
        case 40:
            lumens = 485;
            break;
        case 60:
            lumens = 870;
            break;
        case 75:
            lumens = 1040;
            break;
        case 100:
            lumens = 1750;
            break;
        default:
            printf("Invalid wattage.\n");
            lumens = 0;
            break;
    }

    printf("The expected brightness is %d lumens.\n", lumens);

    return 0;
}
