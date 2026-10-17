#include<stdio.h>

int add(int x, int y)
{

 int result;
 result = x+y;
 return result;
}

int sub(int x, int y)
{
 int result;
 result = x-y;
 return result;
}


int main()

{
 int first, second;
 char ch;
 printf("Enter a operator: ");

 scanf("%c", &ch);
 int result;
 printf("Enter first number for calculation: ");
 scanf("%d", &first);
 printf("Enter second number for calculation: ");
 scanf("%d", &second);
 
 switch(ch)
 {
  case '+':
  result = add(first, second);
  printf("addition of your two numbers is %d ", result );
  break;
case '-':
  result = sub(first, second);
  printf("subtraction of your two numbers is %d ", result );
  break;

 }

}