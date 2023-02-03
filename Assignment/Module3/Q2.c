#include <stdio.h>

void main()

{
    int a,b;

    printf("Enter 1st Number : ");
    scanf("%d", &a);

    printf("Enter 2nd Number : ");
    scanf("%d", &b);

    printf("\nAddition :         %d + %d = %d\n", a, b, a+b);
    printf("Subtraction :      %d - %d = %d\n", a, b, a-b);
    printf("Multiplication :   %d * %d = %d\n", a, b, a*b);
    printf("Division :         %d / %d = %d\n", a, b, a/b);
}