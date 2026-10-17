#include<stdio.h>

int main(void)
{
   int total;
   int students;
   double average;
   printf("enter total student score>");
   scanf("%d", &total);
   printf("enter the number of students>");
   scanf("%d", &students);
   average = (double) total / (double) students;
   printf(" average score is %.2f/n", average);
   return 0;
}