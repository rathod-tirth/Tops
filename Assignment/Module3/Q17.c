// Add, Sub, Mult, Div using switch

#include <stdio.h>

int main()

{
	int choice;
	float a, b;
	
	printf("\nEnter First no. : ");
	scanf("%f",&a);
			
	printf("Enter Second no. : ");
	scanf("%f",&b);
	
	printf("--------MENU--------\n\n");
	
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	
	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	
	printf("\n");

	switch(choice)
	{
		case 1:
			printf("Addition : %.0f + %.0f = %.0f",a,b,a+b);
			break;
			
		case 2:
			printf("Subtraction : %.0f - %.0f = %.0f",a,b,a-b);
			break;
			
		case 3:
			printf("Addition : %.0f * %.0f = %.0f",a,b,a*b);
			break;
			
		case 4:
			printf("Addition : %.1f / %.1f = %.1f",a,b,a/b);
			break;
			
		default :
			printf("WRONG INPUT");
			break;
	}
	
	return 0;
}









