// Max no.

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
	
	printf("\nMax no. = %d",a[0]);
	
	return 0;
}







