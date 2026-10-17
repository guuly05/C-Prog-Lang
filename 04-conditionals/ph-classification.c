#include<stdio.h>
int main()
{
int ph;
printf("enter the ph level of your water: ");
scanf("%d", &ph);

If ( ph > 7 && ph <= 12)
{ 
Printf("it's alkaline");
Else if ( ph > 12 ) 
Printf("it's very alkaline");
}
Else 
{
If ( ph < 7 && ph > 2 )
Printf ("it's acidic");
Else if ( ph <= 2 ) 
Printf ("it's very acidic");
}

}