#include <stdio.h>

void x()
{
	int choice,total=0,a,piz,bur,dsa,dli;
	
	printf("------------Menu-----------------\n\n");
	printf("1. Pizza\tprice = 180rs/pcs\n");
	printf("2. Burger\tprice = 100rs/pcs\n");
	printf("3. Dosa\t\tprice = 120rs/pcs\n");
	printf("4. Idli\t\tprice = 50rs/pcs\n");
	
	printf("\nEnter Your choice : ");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			printf("Enter Quantity : ");
			scanf("%d",&piz);
			
			a=piz*180;
			printf("\nAmount = %d",a);
			
			total=a+total;
			break;
			
		case 2:
			printf("Enter Quantity : ");
			scanf("%d",&bur);
			
			a=bur*100;
			printf("\nAmount = %d",a);
			
			total=a+total;
			break;
			
		case 3:
			printf("Enter Quantity : ");
			scanf("%d",&dsa);
			
			a=dsa*120;
			printf("\nAmount = %d",a);
			
			total=a;
			break;
			
		case 4:
			printf("Enter Quantity : ");
			scanf("%d",&dli);
			
			a=dli*50;
			printf("\nAmount = %d",a);
			
			total=a+total;
			break;
		
		default :
			printf("\nWRONG INPUT\n");
			break;
	}
	printf("\n\nYour Total is %d\n",total);
}

int main()

{	
	x();
	
	int i;
	char yn='n';
	
	do
	{
		printf("Do you want to place more order? y/n : ");
		scanf("%s",yn);
		
		i++;
	}	while(yn!='n');
	
	return 0;
}















