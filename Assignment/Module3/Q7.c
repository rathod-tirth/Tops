// Degree Celcius to Farenheit

#include <stdio.h>

int main()

{
	float c,f;
	
	printf("Write Temperature in Degree Celcius : ");
	scanf("%f",&c);
	
	f=((c*9)/5)+32;	
	
	printf("Temperature in Degree Farenheit : %.2f",f);
	
	return 0;	
}









