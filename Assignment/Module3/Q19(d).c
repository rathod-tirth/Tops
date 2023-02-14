// Find the Factorial

#include <stdio.h>

int main()

{
	int i, a, f=1;
	
	printf("Enter any no. : ");
	scanf("%d",&a);
	
	for(i=a; i>0; i--)
	{
		f=f*i;
	}
	printf("Factorial of %d : %d",a,f);
	
	return 0;
}
