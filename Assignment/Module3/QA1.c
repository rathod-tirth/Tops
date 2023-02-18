//	Summmation and avg of sum using array

#include <stdio.h>

int main()

{
	int a[10], i, sum=0, count=0;
	
	for(i=0; i<10; i++)
	{
		printf("Enter no. : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(i=0; i<10; i++)
	{
		sum+=a[i];
		count++;
	}
	
	printf("Sum of given no. = %d\n",sum);
	
	printf("Avg of given no. = %d",sum/count);
	
	return 0;
}









