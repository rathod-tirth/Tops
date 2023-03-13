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
		int depo,with;
		
		void get1()
		{
			bal[0]=2500000;
			bal[1]=100000;
			bal[2]=75000;
		}
		
		void depo1(int c)
		{
			c=c-5;
			cout<<"Your Balance: "<<bal[c]<<endl;
			
			cout<<"Enter Amount to Deposit: ";
			cin>>depo;
			
			bal[c]+=depo;
			cout<<"\nYour Balance: "<<bal[c];
			
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

int main()
{
	int n=0, type, type1;
	
	Bank ob;
	ob.set();
	
	n=ob.check();
	
//	cout<<n-5;
	
	if(n>=5)
	{
//		cout<<"\nACCESS GRANTED\n\n";
		
		cout<<endl;
		cout<<"1. Saving Account\n2. Current Account\n\n";
		cout<<"Enter value: ";
		cin>>type;
		
		switch(type)
		{
			case 1:
				cout<<endl;
				
				Sav ob1;
				ob1.get1();
				
				cout<<"1. Deposit Cash\n2. Check Balance\n3. Withdraw Cash\n\n";
				cout<<"Enter value: ";
				cin>>type1;
				
				switch(type1)
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
				}
		}
	}
	else
	{
		cout<<"\nACCESS DENIED\n";
	}
	
	return 0;
}


/*
	bank= name, acc no., type, 
	sav= bal, int, no cheque, 
	cur= bal, no int, cheque, mim bal, penatly,
	
	task= deposits, display bal, calculate interest, withdraw, 
*/
