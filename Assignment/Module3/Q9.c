// swap w/o third variable

#include <stdio.h>

int main()

{
	int a=3, b=7;
	
	printf("Before Swap : a=%d and b=%d\n",a,b);
	
	a=b+a;
	b=a-b;
	a=a-b;
	
	printf("After Swap  : a=%d and b=%d",a,b);
	
	return 0;
}
