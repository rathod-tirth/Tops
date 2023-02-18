//	odd even using array

#include <stdio.h>

int main()

{
	int a[10], i, cat=0, dog=0;
	
	for(i=0; i<10; i++)
	{
		printf("Enter no. : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(i=0; i<10; i++)
	{
		if(a[i]%2==0)
		{
			cat++;
		}	else
		{
			dog++;
		}
	}
	
	printf("No. of odd numbers = %d\n",dog);
	
	printf("No. of even numbers = %d",cat);
	
	return 0;
}









