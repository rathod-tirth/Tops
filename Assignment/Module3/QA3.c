//	Sorting of arrays

#include <stdio.h>

int main()

{
	int a[5], i, j, temp;
	
	for(i=0; i<5; i++)
	{
		printf("Enter any no. : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("\nDescending no. = ");
	
	for(i=0; i<5; i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}







