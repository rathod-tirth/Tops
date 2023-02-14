// Leap Year

#include <stdio.h>

int main()

{
	int year;
	
	printf("Enter Year : ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("%d is a Leap year",year);
	}	else
	{
		printf("%d is not a Leap year",year);
	}
	
	return 0;
}
