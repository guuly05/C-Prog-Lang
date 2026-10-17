#include<stdio.h>
int main()
{

 int year;
 printf(" enter a year> " );
 scanf("%d", &year);
 int leap;
 leap = year%4;
 if( leap==1 )
 printf("the year is most likely not a leap year");
 else
 printf("the year is most likely a leap year"); 


}
  
 
 
