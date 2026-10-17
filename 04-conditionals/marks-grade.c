#include<stdio.h>
int main()
{
int marks;
printf("enter your marks: ");
scanf("%d", &marks);
if (marks > 90)
printf("you have an A+ grade");
else if(marks >= 85 && marks <= 90)
printf("you have A grade");
else if (marks >= 75 && marks <= 84)
printf("you have a B grade");
else if( marks >= 65 && marks <= 74)
printf("you have a C grade");
else if (marks >= 50 && marks <= 64)
printf("you have a D grade");
else if (marks <= 0)
printf("out of range of grading");
else if (marks > 100)
printf("out of range of grading");
else 
printf("you got an F grade");

}