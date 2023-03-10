// Simple interest using constructor

#include <iostream>
using namespace std;

class Interest
{
	public:
		
		Interest(int p, int y, int r)
		{
			cout<<"\nInterest = "<<((p*r*y)/100);
		}
		
		Interest(int p, int y, float r=2.5)
		{
			cout<<"\n\nWith Default 2.5% interest rate:\nInterest = "<<((p*r*y)/100);
		}
};

int main()
{
	int pp,yy,rr;
	
	cout<<"Enter Principal Amount : ";
	cin>>pp;
	
	cout<<"Enter Time of Period : ";
	cin>>yy;
	
	cout<<"Enter Rate of Interest : ";
	cin>>rr;
	
	Interest obj(pp,yy,rr), obj1(pp,yy);
	return 0;
}
