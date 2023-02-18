// square and cube using func

#include <stdio.h>

void square(int a)
{
	printf("\nSquare of %d = %d\n", a, a*a);
}

void cube(int a)
{
	printf("Cube of %d = %d\n", a, a*a*a);
}

void main()

{
    int a;

    printf("Enter any Number : ");
    scanf("%d", &a);
	
	square(a);    
    cube(a);
}
