// Max numbers using nested if

#include <stdio.h>

int main()

{
	int a,b,c;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
	printf("Enter third number : ");
	scanf("%d",&c);
	
	if(a>=b && a>=c)
	{
		printf("%d is Max no.",a);
	}	else if(b>=a && b>=c)
	{
		printf("%d is Max no.",b);
	}	else if(c>=a && c>=b)
	{
		printf("%d is Max no.",c);
	}
	
	return 0;
}







