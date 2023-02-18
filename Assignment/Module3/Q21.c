//	Array

#include <stdio.h>

int main()

{
	int a[5],i;
	
	for(i=0; i<5; i++)
	{
		printf("Enter no. : ");
		scanf("%d",&a[i]);	
	}
	
	printf("\n");
	
	for(i=0; i<5; i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
