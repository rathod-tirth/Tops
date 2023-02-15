// Pyramids 11-16

#include <stdio.h>

int main()

{
	int i, j;
	
//	11.
	
	for(i=1; i<=5; i++)
	{	
		for(j=5; j>=i; j--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			if(j%2==0)
			{
				printf("0 ");
			}	else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
//	12.

	for(i=1; i<=5; i++)
	{	
		for(j=5; j>=i; j--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d ",i*i);
		}
		printf("\n");
	}
	
	printf("\n");

//	13.

	for(i=1; i<=5; i++)
	{	
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1; i<=5; i++)
	{	
		for(j=4; j>=i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");

//	14.

	for(i=1; i<=5; i++)
	{	
		for(j=1; j<=i; j++)
		{
			printf(" ");
		}
		for(j=5; j>=i; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	printf("\n");
	
//	15.

	for(i=1; i<=5; i++)
	{	
		for(j=5; j>=i; j--)
		{
			printf("*");
		}
		for(j=2; j<=i; j++)
		{
			printf("  ");
		}
		for(j=5; j>=i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");

//	16.

	for(i=1; i<=5; i++)
	{	
		for(j=5; j>=i; j--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		for(j=5; j>=i; j--)
		{
			printf(" ");
		}
		printf("\n");
	}
	for(i=1; i<=5; i++)
	{	
		for(j=1; j<=i; j++)
		{
			printf(" ");
		}
		for(j=5; j>=i; j--)
		{
			printf("* ");
		}
		for(j=1; j<=i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}	
			
	return 0;
}












