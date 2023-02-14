// Pyramids 1-5

#include <stdio.h>

int main()

{
	int i, j;
	
//	1.
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");

//	2.

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	printf("\n");
	
//	3.

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	printf("\n");

//	4.

	for(i=1; i<6; i++)
	{
		for(j=5; j>=i; j--)
		{
			printf(" ");
		}
		
		for(j=1; j<=i; j++)
		{
			printf("*");
		} 
		printf("\n");
	}
	
	printf("\n");

//	5.

	for(i=1; i<6; i++)
	{
		for(j=5; j>=i; j--)
		{
			printf(" ");
		}
		
		for(j=1; j<=i; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	return 0;
}
