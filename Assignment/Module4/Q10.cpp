// Add, Sub, Mult, Div using Constructor

#include <iostream>
using namespace std;

class Cal
{
	public:
		float a,b;
		
		Cal()
		{
			cout<<"Enter no. : ";
			cin>>a;
			
			cout<<"Enter no. : ";
			cin>>b;
			
			cout<<endl;
			cout<<"Addition : "<<a+b<<endl;
			cout<<"Subtraction : "<<a-b<<endl;
			cout<<"Multiplication : "<<a*b<<endl;
			cout<<"Division : "<<a/b<<endl;
		}
};

int main()
{
	Cal obj;
	
	return 0;
}
