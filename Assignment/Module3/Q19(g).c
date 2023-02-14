// Reversing of a number

#include <stdio.h>

int main()

{
	int a, b=0, r=0;
	
	printf("Enter any number : ");
	scanf("%d",&a);
	
	while(a>0)
	{
		r=a%10;
		b=b*10+r;
		a=a/10;
	}
	printf("Reverse : %d",b);
	
	return 0;
}
