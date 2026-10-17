#include <stdio.h>

int main() {
    int bloodPressure;
    
    printf("Enter the systolic blood pressure: ");
    scanf("%d", &bloodPressure);
    
    if (bloodPressure >= 140) {
        printf("Hypertension\n");
    } else if (bloodPressure >= 120) {
        printf("Pre-hypertension\n");
    } else {
        printf("Normal\n");
    }
    
    return 0;
}
