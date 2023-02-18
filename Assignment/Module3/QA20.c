// Fibonacci series

#include <stdio.h>

void fibo(int a)
{
	int count=1, i=0, f=0, temp;
	
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
}

int main()

{
	int a;
	
	printf("Enter any no. : ");
	scanf("%d",&a);
	
	printf("Fibonacci series : ");
	
	fibo(a);
	
	return 0;
}















