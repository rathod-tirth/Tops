// Food bill

#include <stdio.h>

void main()
{
	int pizza=180, burger=100, dosa=120, idli=50;				//	Product pricing
	
	int grass, quant, amo, total=0;
	char y='y';
	
	while(y=='y')												//	looping for more orders
	{
		
		printf("\n\n---------------Menu---------------\n\n");	//	Menu
		printf(" 1. Pizza\tprice = %drs/pcs\n",pizza);
		printf(" 2. Burger\tprice = %drs/pcs\n",burger);
		printf(" 3. Dosa\tprice = %drs/pcs\n",dosa);
		printf(" 4. Idli\tprice = %drs/pcs\n\n",idli);
		printf("----------------------------------\n\n");
		
		printf(" Enter your choice : ");							//	choice
		scanf("%d",&grass);
		
		switch(grass)
		{
			case 1:
				printf("\n>> You have selected Pizza.\n\n");		//	for pizza
				
				printf(" Enter Quantity : ");
				scanf("%d",&quant);
				
				amo=quant*pizza;
				break;
				
			case 2:
				printf("\n>> You have selected Burger.\n\n");		//	for burger
				
				printf(" Enter Quantity : ");
				scanf("%d",&quant);
				
				amo=quant*burger;
				break;
				
			case 3:
				printf("\n>> You have selected Dosa.\n\n");			//	for dosa
				
				printf(" Enter Quantity : ");
				scanf("%d",&quant);
				
				amo=quant*dosa;
				break;
				
			case 4:
				printf("\n>> You have selected Idli.\n\n");			//	for idli
				
				printf(" Enter Quantity : ");
				scanf("%d",&quant);
				
				amo=quant*idli;
				break;
				
			default :
				printf("\n>> Coming soon\n\n");
				break;		
		}
		
		printf(" Amount = %d\n",amo);							//	Amount for each item
		total+=amo;
		
		printf(" Total = %d\n\n",total);							//	Grand total
		
		printf(">> Do you want to place more order? y/n : ");		//	for placing more orders
		scanf("%s",&y);
	
		if(y!='y')												//	if user enters wrong input
		{
			printf("\n>> Your Total = %d\n",total);
		}		
	}
}
















