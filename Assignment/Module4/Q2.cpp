// Add, Sub, Mult, Div using class

#include <iostream>
using namespace std;

class A
{
	public:
		void cal(float a, float b)
		{
			cout<<endl<<"Addition : "<<a<<" + "<<b<<" = "<<a+b<<endl;
			cout<<endl<<"Subtraction : "<<a<<" - "<<b<<" = "<<a-b<<endl;
			cout<<endl<<"Multiplication : "<<a<<" * "<<b<<" = "<<a*b<<endl;
			cout<<endl<<"Division : "<<a<<" / "<<b<<" = "<<a/b<<endl;
		}	
};

int main()

{
	float a, b;
	
	cout<<"Enter no. : ";
	cin>>a;
	
	cout<<"Enter no. : ";
	cin>>b;
	
	A obj;
	obj.cal(a,b);
	
	return 0;
}










