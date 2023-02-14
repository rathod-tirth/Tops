// Summation of given number

#include <stdio.h>

int main()

{
	int a, b=0, r=0;
	
	printf("Enter any no. : ");
	scanf("%d",&a);
	
	while(a>0)
	{
		r=a%10;
		b=b+r;
		a=a/10;
	}
	printf("Summation of your no. : %d",b);
	
	return 0;
}






