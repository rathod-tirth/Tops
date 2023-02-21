// Identify the number is palidrome or not using recursive func

#include <stdio.h>

void main()

{
	int a, b=0, c=0, z;
	
	printf("Enter any no. : ");
	scanf("%d",&a);
	
	z=a;
	
	while(a>0)
	{
		c = a%10;
		b = b*10+c;
		a = a/10;
	}
	
	printf("Reverse = %d\n",b);
	
	if(z==b)
	{
		printf("Number is palidrome");
	}	else
	{
		printf("Number is not palidrome");
	}
}








