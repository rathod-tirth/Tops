// Food Dilivery Service (Assesment)

#include <iostream>
using namespace std;

int welcome()
{
	string name;
		
	cout<<"\n\n----------Tomato----------\n\n";
			
	cout<<"Enter your name: ";
	cin>>name;
	cout<<">> Hello "<<name<<endl<<endl;
	
	cout<<">> What would you like to order?";
}

class Price
{
	public:
		int pp1,pp2,pp3;
		int bb1,bb2,bb3;
		int ss1,ss2,ss3;
		int rr1,rr2,rr3;
		int b1,b2,b3;
		
		void price()
		{
			pp1=150; pp2=100; pp3=200;	//	pizza pricing
			bb1=100; bb2=200; bb3=50;	//	buger pricing
			ss1=30; ss2=30; ss3=70;		//	sandwich pricing
			rr1=50; rr2=50; rr3=25;		//	roll pricing
			b1=70; b2=120; b3=100;		// biryani pricing
		}
};

class Bill: public Price
{
	public:
		int cc, tt, q, amo;
		int bill()
		{
			cout<<"Enter your choice: ";
			cin>>cc;
			
			cout<<endl;
			
			switch(cc)
			{
				case 1:
					{
						cout<<"1) Italian Pizza Rs."<<pp1<<"\n2) Margerita Pizza Rs."<<pp2<<"\n3) Chicago Pizza Rs."<<pp3<<"\n\n";
						
						cout<<"Enter which Pizza would you like?: ";
						cin>>tt;
						
						switch(tt)
						{
							case 1:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Italian Pizza"<<endl;
								amo=q*pp1;
								break;
							
							case 2:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Margerita Pizza"<<endl;
								amo=q*pp2;
								break;
							
							case 3:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Chicago Pizza"<<endl;
								amo=q*pp3;
								break;
							
							default:
								cout<<"\n| Coming Soon |\n\n";
								return 0;
								break;
						}
					}
					break;
				
				case 2:
					{
						cout<<"1) Cheese Burger Rs."<<bb1<<"\n2) Chicken Burger Rs."<<bb2<<"\n3) Aloo Tikki Burger Rs."<<bb3<<"\n\n";
						
						cout<<"Enter which Burger would you like?: ";
						cin>>tt;
						
						switch(tt)
						{
							case 1:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Cheese Burger"<<endl;
								amo=q*bb1;
								break;
							
							case 2:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Chicken Burger"<<endl;
								amo=q*bb2;
								break;
							
							case 3:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Aloo Tikki Burger"<<endl;
								amo=q*bb3;
								break;
							
							default:
								cout<<"\n| Coming Soon |\n\n";
								return 0;
								break;
						}
					}
					break;
				
				case 3:
					{
						cout<<"1) Aloo Mutter Sandwich Rs."<<ss1<<"\n2) Cheese Sandwich Rs."<<ss2<<"\n3) Grilled Sandwich Rs."<<ss3<<"\n\n";
						
						cout<<"Enter which Sandwich would you like?: ";
						cin>>tt;
						
						switch(tt)
						{
							case 1:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Aloo Mutter Sandwich"<<endl;
								amo=q*ss1;
								break;
							
							case 2:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Cheese Sandwich"<<endl;
								amo=q*ss2;
								break;
							
							case 3:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Grilled Sandwich"<<endl;
								amo=q*ss3;
								break;
							
							default:
								cout<<"\n| Coming Soon |\n\n";
								return 0;
								break;
						}
					}
					break;
					
				case 4:
					{
						cout<<"1) Chinese Roll Rs."<<rr1<<"\n2) Cheese Roll Rs."<<rr2<<"\n3) Fried Roll Rs."<<rr3<<"\n\n";
						
						cout<<"Enter which Roll would you like?: ";
						cin>>tt;
						
						switch(tt)
						{
							case 1:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Chinese Roll"<<endl;
								amo=q*rr1;
								break;
							
							case 2:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Cheese Roll"<<endl;
								amo=q*rr2;
								break;
							
							case 3:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Fried Roll"<<endl;
								amo=q*rr3;
								break;
							
							default:
								cout<<"\n| Coming Soon |\n\n";
								return 0;
								break;
						}
					}
					break;
					
				case 5:
					{
						cout<<"1) Veg. Biryani Rs."<<b1<<"\n2) Chicken Biryani Rs."<<b2<<"\n3) Hyderabad Biryani Rs."<<b3<<"\n\n";
						
						cout<<"Enter which Biryani would you like?: ";
						cin>>tt;
						
						switch(tt)
						{
							case 1:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Veg. Biryani"<<endl;
								amo=q*b1;
								break;
							
							case 2:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Chicken Biryani"<<endl;
								amo=q*b2;
								break;
							
							case 3:
								cout<<"Enter Quantity: ";
								cin>>q;
								
								cout<<"\n\n----------Your Order----------\n\n";
								cout<<">> "<<q<<"x Hyderabad Biryani"<<endl;
								amo=q*b3;
								break;
							
							default:
								cout<<"\n| Coming Soon |\n\n";
								return 0;
								break;
						}
					}
					break;
				
				default:
					cout<<"\n| Coming Soon |\n\n";
					return 0;
					break;
			}
			return amo;
		}
			
};

int main()
{
	welcome();
	
	int total=0;	
	char h='Y';	
	
	Bill ob;
	ob.price();
	
	while(h=='Y')
	{
		cout<<"\n\n----------Menu----------\n\n";
		cout<<"1) Pizza\n2) Burger\n3) Sandwich\n4) Roll\n5) Biryani\n\n";	
		
		total+=ob.bill();
		
		cout<<">> Total bill = Rs. "<<total<<endl<<endl;
		
		if(total!=0)
		{
			cout<<"Your Order will be delivered in 40 minutes"<<endl;
			cout<<"Thank you for ordering from Tomato"<<endl<<endl;
		}
		
		cout<<"Would you like to order anything else? Y / N: ";
		cin>>h;
		
		if(h!='Y')
		{
			cout<<"\n\nTotal Bill = Rs. "<<total;
		}
	}	
	return 0;
}
