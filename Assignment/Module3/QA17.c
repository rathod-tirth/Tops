// calc using func

#include <stdio.h>

void add(float a, float b)
{
	printf("Addition : %.0f + %.0f = %.0f",a,b,a+b);
}

void sub(float a, float b)
{
	printf("Subtraction : %.0f - %.0f = %.0f",a,b,a-b);
}

void multi(float a, float b)
{
	printf("Multiplication : %.0f * %.0f = %.0f",a,b,a*b);
}

void div(float a, float b)
{
	printf("Division : %.1f / %.1f = %.2f",a,b,a/b);
}

void main()

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
			add(a,b);
			break;
			
		case 2:
			sub(a,b);
			break;
			
		case 3:
			multi(a,b);
			break;
			
		case 4:
			div(a,b);
			break;
			
		default :
			printf("WRONG INPUT");
			break;
	}
	
}









