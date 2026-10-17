#include <stdio.h>

int main()
 
{
int age;

printf("Enter the age of the student: ");
scanf("%d", &age);

if (age >= 2 && age <= 4) 
{printf("The student is in KG.\n");} 
else if (age >= 5 && age <= 7) 
{printf("The student is in 1st grade.\n");} 
else if (age >= 7 && age <= 8) 
{printf("The student is in 2nd grade.\n");} 
else 
{printf("The student's age does not fit into any specified grade category.\n");}

return 0;
}
