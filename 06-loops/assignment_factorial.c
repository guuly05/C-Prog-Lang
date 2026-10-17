#include <stdio.h>


unsigned long long calculateFactorial(int n)
 {
    return (n == 0 || n == 1) ? 1 : n * calculateFactorial(n - 1);
 }

int main() 
{
    int num;
    unsigned long long factorial;

   
    printf("Enter a number: ");
    scanf("%d", &num);


    if (num < 0) 
        printf("Factorial is not defined for negative numbers.\n");
     else {
        
        factorial = calculateFactorial(num);
        printf("Factorial of %d is %llu\n", num, factorial);
   }

    return 0;
}
