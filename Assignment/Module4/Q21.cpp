// Bank Account

#include <iostream>
#include <string>
using namespace std;

class Bank
{
	public:
		string name[5], name0;
		int acc[5], acc0, bal[5];
		
		void set()
		{
			name[0]="Ravidas Mishra"; // sav
			name[1]="Mahima Prasad"; // sav
			name[2]="Tejas Chand"; // sav
			name[3]="Mitabhai Bhakharwadi"; // cur
			name[4]="Kesar Mistri"; // cur

			acc[0]=11057071;
			acc[1]=11057072;
			acc[2]=11057073;
			acc[3]=11057074;
			acc[4]=11057075;
			
			bal[0]=2500000;
			bal[1]=100000;
			bal[2]=75000;
			bal[3]=55000000;
			bal[4]=6000;

		}
		
		int check()
		{
			cout<<"Enter Name: ";
			getline(cin, name0);
			
			cout<<"Enter Account no. : ";
			cin>>acc0;
			
			for(int i=0; i<5; i++)
			{
				if(name0==name[i] && acc0==acc[i])
				{
					return 5+i;
					break;
				}
			}
		}
};

class Sav: public Bank
{
	public:
		int ii,depo,with;
		
		void depo1(int c)
		{
			c=c-5;
			cout<<"Your Balance: "<<bal[c]<<endl;
			
			cout<<"Enter Amount to Deposit: ";
			cin>>depo;
			
			ii=(depo/100)*2;
			depo+=ii;
			
			bal[c]+=depo;
			cout<<"\nYour Balance: "<<bal[c]<<endl;
			cout<<"Interest: "<<ii<<endl;
			
		}
		
		void bal1(int c)
		{
			c=c-5;
			cout<<"Your Balance: "<<bal[c]<<endl;
		}
		
		void with1(int c)
		{
			c=c-5;
			cout<<"Your Balance: "<<bal[c]<<endl;
			
			cout<<"Enter Amount to Withdraw: ";
			cin>>with;
			
			bal[c]-=with;
			cout<<"\nYour Balance: "<<bal[c];
		}
};

class Cur: public Bank
{
	public:
		int depo,with;
		
		void depo2(int c)
		{
			c=c-5;
			cout<<"Your Balance: "<<bal[c]<<endl;
			
			cout<<"Enter Amount to Deposit: ";
			cin>>depo;
			
			bal[c]+=depo;
			
			cout<<"\nYour Balance: "<<bal[c]<<endl;	
		}
		
		void bal2(int c)
		{
			c=c-5;
			cout<<"Your Balance: "<<bal[c]<<endl;
		}
		
		void with2(int c)
		{
			c=c-5;
			cout<<"Your Balance: "<<bal[c]<<endl;
			
			cout<<"Enter Amount to Withdraw: ";
			cin>>with;
			
			bal[c]-=with;
			
			if(bal[c]<5000)
			{
				bal[c]-=500;
				cout<<"Your Account is lower than Minimum Balance\n";
				cout<<"Penalty = "<<500<<endl;
			}
			cout<<"\nYour Balance: "<<bal[c];
		}
};

int main()
{
	int n=0, type, type0;
	
	Bank ob;
	ob.set();
	
	n=ob.check();
	
	if(n>=5)
	{
		cout<<endl;
		cout<<"1. Saving Account\n2. Current Account\n\n";
		cout<<"Enter value: ";
		cin>>type;
		
		switch(type)
		{
			case 1:
				{
					cout<<endl;
					
					Sav ob1;
					ob1.set();
					
					cout<<"1. Deposit Cash\n2. Check Balance\n3. Withdraw Cash\n\n";
					cout<<"Enter value: ";
					cin>>type0;
					
					switch(type0)
					{
						case 1:
							ob1.depo1(n);
							break;
						
						case 2:
							ob1.bal1(n);
							break;
							
						case 3:
							ob1.with1(n);
							break;
							
						default:
							cout<<"\nWRONG INPUT\n";
					}	
				}
				break;
			
			case 2:
				{
					cout<<endl;
				
					Cur ob2;
					ob2.set();
					
					cout<<"1. Deposit Cash\n2. Check Balance\n3. Withdraw Cash\n\n";
					cout<<"Enter value: ";
					cin>>type0;
					
					switch(type0)
					{
						case 1:
							ob2.depo2(n);
							break;
						
						case 2:
							ob2.bal2(n);
							break;
							
						case 3:
							ob2.with2(n);
							break; 
						
						default:
							cout<<"\nWRONG INPUT\n";
					}
				}
				break;
				
			default:
				cout<<"\nWRONG INPUT\n";
		}
	}
	else
	{
		cout<<"\nACCESS DENIED\n";
	}
	
	return 0;
}
