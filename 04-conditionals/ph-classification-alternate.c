#include<stdio.h>
int main()
{
int y;
printf("Gali PH ka biyaha: ");
scanf("%d",&y);

	if (y>7)
		{
		if (y>12)
		printf("PHku waa very alkaline");
		else 
		printf("PHku waa alkaline");

		}	
	else
		{
		 if (y == 7)
		printf("PHku waa natural");
		else if(y>2)
		printf("PHku waa acidic");
		else
		printf("PHku waa very acidic");
		}

}