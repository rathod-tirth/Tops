// Area of Circle, Triangle and Rectangle using if statement

#include <stdio.h>

int main()

{
	int choice;
	float r, base, alt, l, b;
	
	printf("--------MENU--------\n\n");
	
	printf("1. Area of Circle\n2. Area of Triangle\n3. Area of Rectangle\n");
	
	printf("Enter choice : ");
	scanf("%d",&choice);
	
	printf("\n");
	
	if(choice==1)
	{
		printf("Enter Radius : ");
		scanf("%f",&r);
	
		printf("Area of Circle : %.2f",3.14159*r*r);
	}	else if(choice==2)
	{
		printf("Enter Base : ");
		scanf("%f",&base);
	
		printf("Enter Altitude : ");
		scanf("%f",&alt);
	
		printf("Area of Triangle : %.2f",0.5*base*alt);
	}	else if (choice==3)
	{
		printf("Enter Length : ");
		scanf("%f",&l);
	
		printf("Enter Breath : ");
		scanf("%f",&b);
	
		printf("Area of Rectangle : %.2f",l*b);
	}	else
	{
		printf("WRONG INPUT");
	}
	
	return 0;
}







