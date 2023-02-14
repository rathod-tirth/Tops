// Fibonacci series

#include <stdio.h>

int main()

{
	int i=0, a, f=0, temp, count=1;
	
	printf("Enter any no. : ");
	scanf("%d",&a);
	
	printf("Fibonacci series : ");
	
	while(count<=a)
	{
		f=f+i;
		printf("%d ",f);
		
		temp=i;
		i=f;
		f=temp;
		
		if(i==0)
		{
			i++;
		}	
		
		count++;
	}
	
	return 0;
}
















