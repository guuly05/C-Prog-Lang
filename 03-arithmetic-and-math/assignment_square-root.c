#include <stdio.h>
#include <math.h>  

int main() {
    double number, sqrt_result;
    
    printf("Enter an integer for square root calculation: ");
    scanf("%lf", &number);
   
    number = fabs(number);
  
    sqrt_result = sqrt(number);
    
    printf("The square root of the absolute value of the entered number is %.2f\n", sqrt_result);
    
    return 0;
}
