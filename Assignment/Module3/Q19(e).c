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

//	0+0=0
//	0+1=1
//	1+1=2
//	2+1=3
//	3+1=4
//	
//	0+0=0
//	1+0=1
//	1+1=2
//	1+2=3
//	2+3=5
//	3+5=8














