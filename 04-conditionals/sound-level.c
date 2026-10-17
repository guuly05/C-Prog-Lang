#include<stdio.h>
int main()
{
int x;
printf("enter the sound loudness in decibales>");
scanf("%d", &x);
if( x <= 50)

printf("sound level is quiet");
else if(x >= 51 && x <= 70)
printf("sound level is intrusive");
else if(x >= 71 && x <= 90)
printf("sound level is annoying");
else if(x >= 91 && x <= 110)
printf("sound level is harmful");
else 
printf("sound level is harmful");


 
}