#include <stdio.h>
#include <math.h>  

int main() 
{
    float wt_lb, ht_in, bmi;
    
    
    printf("Enter weight in pounds: ");
    scanf("%f", &wt_lb);
    
    printf("Enter height in inches: ");
    scanf("%f", &ht_in);
    
   
    bmi = (703 * wt_lb) / (ht_in * ht_in);
    
    
    bmi = round(bmi * 10) / 10.0;
    
       printf("Your BMI is: %.1f\n", bmi);
    
   
    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi <= 24.9) {
        printf("Normal\n");
    } else if (bmi <= 29.9) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }
    
    return 0;
}
