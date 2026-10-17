#include<stdio.h>
int main()
{
char level;
printf("enter your buisness level");
scanf("%c", &level);
switch(level)
{
case 'A':
printf("you have 500k in taxes ");
break;
case 'B':
printf("you have 400k in taxes ");
break;
case 'C':
printf("you have 250k in taxes ");
break;
case'D':
printf("you have 105k in taxes ");
break;
}

}