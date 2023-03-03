// Find the Factorial

#include <stdio.h>

int main()

{
	int i, a;
	
	printf("Enter any no. : ");
	scanf("%d",&a);
	
	for(i=a-1; i>0; i--)
	{
		a*=i;
	}
	printf("Factorial : %d",a);
	
	return 0;
}
