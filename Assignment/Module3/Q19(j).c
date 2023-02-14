// Summation of first and last digit

#include <stdio.h>

int main()

{
	int a, b=0, r=0, c;
	
	printf("Enter any no. : ");
	scanf("%d",&a);

	c=a;
	
	while(a>0)
	{
		r=a%10;
		
		if(c==a || a>=0 && a<=9)
		{
			b=b+r;	
		}
		a=a/10;
	}
	printf("Summation of first and last digit : %d",b);
	
	return 0;
}






