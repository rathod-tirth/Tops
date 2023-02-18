// Max no. using func

#include <stdio.h>

void max(int a[])
{
	int i, j, temp;
	
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
}

int main()

{
	int a[5], i;
	
	for(i=0; i<5; i++)
	{
		printf("Enter no. : ");
		scanf("%d",&a[i]);
	}
	
	max(a);
	
	return 0;
}







