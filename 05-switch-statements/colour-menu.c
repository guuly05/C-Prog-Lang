#include<stdio.h>
int main()
{
 char color;
printf("enter r b y ");
scanf("%c", &color);

switch (color) { /* break statements missing */


case 'R':
 printf("red\n");
case 'B':
 printf("blue\n");
case 'Y':
 printf("yellow\n");
default:
printf("n/a");
}
}
