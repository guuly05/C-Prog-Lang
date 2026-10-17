#include<stdio.h>
int main()
{
int marks;
printf("enter your marks: ");
scanf("%d", &marks);
switch (marks)
{
case 90 ... 100:
printf("A+");
break;
case 85 ... 89:
printf("A");
break;
case 80 ... 84:
printf("B+");
break;
case 75 ... 79:
printf("B");
break;
case 70 ... 74:
printf("C+");
break;
case 65 ... 69:
printf("C");
break;
case 60 ... 64:
printf("D+");
break;
case 55 ... 59:
printf("D");
break;
case 50 ... 54:
printf("F");
break;
}

}