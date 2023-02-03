#include <stdio.h>

void main()

{
    float i,p,r,t;

    printf("Enter Principal Amount : ");
    scanf("%f", &p);

    printf("Enter Rate of Inerest : ");
    scanf("%f", &r);

    printf("Enter Time Period : ");
    scanf("%f", &t);

    printf("\nSimple Interest = %f\n", p*r*t/100);
}