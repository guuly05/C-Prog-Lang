#include <stdio.h>
#include <math.h>  

int main() 
{
    double weight_lb, height_in, bmi;
    int category;
    
    printf("Enter weight in pounds: ");
    scanf("%lf", &weight_lb);
    printf("Enter height in inches: ");
    scanf("%lf", &height_in);
    
    
    bmi = (703 * weight_lb) / pow(height_in, 2);
    
    
    if (bmi < 18.5) 
        category = 0;
     else if (bmi < 25.0) 
        category = 1;
     else if (bmi < 30.0) 
        category = 2;
     else 
        category = 3;
    
    

    switch (category) 
  {
        case 0:
            printf("BMI: %.1f - Underweight\n", bmi);
            break;
        case 1:
            printf("BMI: %.1f - Normal\n", bmi);
            break;
        case 2:
            printf("BMI: %.1f - Overweight\n", bmi);
            break;
        case 3:
            printf("BMI: %.1f - Obese\n", bmi);
            break;
        default:
            printf("Error in BMI calculation\n");
            break;
   }
    
    return 0;
}
