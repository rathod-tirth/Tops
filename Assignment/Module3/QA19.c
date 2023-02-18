// Find the Factorial using func

#include <stdio.h>

void fact(int a)
{
	int i, f=1;
	
	for(i=a; i>0; i--)
	{
		f=f*i;
	}
	printf("Factorial of %d : %d",a,f);
}

int main()

{
	int a;
	
	printf("Enter any no. : ");
	scanf("%d",&a);
	
	fact(a);
	
	return 0;
}
