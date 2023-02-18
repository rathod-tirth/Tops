// finding elements form the array

#include <stdio.h>

int main()

{
	int a[5]={5,7,1,3,8}, b, i;
	
	printf("Enter no. : ");
	scanf("%d",&b);
	
	printf("\n");
	
	switch(b)
	{
		case 0:
			printf("%d", a[0]);
			break;
			
		case 1:
			printf("%d", a[1]);
			break;
			
		case 2:
			printf("%d", a[2]);
			break;
			
		case 3:
			printf("%d", a[3]);
			break;
			
		case 4:
			printf("%d", a[4]);
			break;
			
		default :
			printf("\nWRONG INPUT\n");
	}
	
	return 0;
}







