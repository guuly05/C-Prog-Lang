#include<stdio.h>
int main()
{
  int number;
  printf("enter any integer> ");
  scanf("%d/n", &number);
  int remainder;
  remainder = number%2;
  if(remainder == 0)
  printf("the number is even");
  else
  printf("the number is odd");
}