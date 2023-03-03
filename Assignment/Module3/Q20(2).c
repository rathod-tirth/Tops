// Pyramids 6-10

#include <stdio.h>

int main()

{
	int i, j, k=1;
	
//	6.

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
	
//	7.

	for(i=1; i<6; i++)
	{
		for(j=5; j>=i; j--)
		{
			printf(" ");
		}
		
		for(j=1; j<=i; j++)
		{
			printf("* ");
		} 
		printf("\n");
	}
	
	printf("\n");

//	8.

	for(i=1; i<6; i++)
	{
		for(j=5; j>=i; j--)
		{
			printf(" ");
		}
		
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		} 
		printf("\n");
	}
	
	printf("\n");

//	9.

	for(i=1; i<6; i++)
	{
		for(j=5; j>=i; j--)
		{
			printf(" ");
		}
		
		for(j=1; j<=i; j++)
		{
			printf("%d ",i);
		} 
		printf("\n");
	}
	
	printf("\n");

//	10.


	for(i=1; i<6; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	
	return 0;
}


















