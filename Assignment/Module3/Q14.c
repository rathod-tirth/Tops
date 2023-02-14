// Max Numbers using Ternary Operators

#include <stdio.h>

int main()

{
	int a, b, c;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
	printf("Enter third number : ");
	scanf("%d",&c);
	
	(a>=b && a>=c) ? printf("%d is Max no.",a):
		(b>=a && b>=c) ? printf("%d is Max no.",b):
			(c>=a && c>=b) ? printf("%d is Max no.",c):printf("ERROR");
			
	return 0;
}
