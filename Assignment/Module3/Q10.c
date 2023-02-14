// Positive or Negative

#include <stdio.h>

int main()

{
	int a;
	
	printf("Enter any number : ");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("\nPositive\n");
	}	else if(a<0)
	{
		printf("\nNegative\n");
	}	else
	{
		printf("\nWRONG INPUT\n");
	}
	
	return 0;
}
