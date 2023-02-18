// Factorial using recrusive function

#include <stdio.h>

int fact(int a)
{
	if(a<1)
	{
		return 1;
	}	else
	{
		return a*fact(a-1);
	}
}

int main()

{
	int a;
	
	printf("Enter a no. : ");
	scanf("%d",&a);
	
	printf("Factorial : %d",fact(a));
	
	return 0;
}
