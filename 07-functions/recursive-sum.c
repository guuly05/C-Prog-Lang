#include<stdio.h>
int sumall;
void sum (int num)
{
sumall = sumall + num;
num = num - 1;
if (num > 0 )
sum(num);
}
int main()
{
int n;
printf("enter a number");
scanf("%d", &n);
sumall = 0;
sum (n);
printf("sum of numbers between 1 and %d is %d", n, sumall);

}