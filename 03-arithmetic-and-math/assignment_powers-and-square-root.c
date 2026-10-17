#include <stdio.h>
#include <math.h>  

int main() 
{
    double number, sqrt_result;
    double base, exponent, power_result;
    
    printf("Enter a number for square root calculation: ");
    scanf("%lf", &number);
    
    number = fabs(number);
    
    sqrt_result = sqrt(number);
    
    printf("The square root of the absolute value of the entered number is %.2f\n", sqrt_result);
    
    printf("Enter the base for power calculation: ");
    scanf("%lf", &base);
    printf("Enter the exponent for power calculation: ");
    scanf("%lf", &exponent);
    
    power_result = pow(base, exponent);
    
    printf("%.2f to the power of %.2f is %.2f\n", base, exponent, power_result);
    
    return 0;
}
