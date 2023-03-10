// Add, Sub, Mult, Div using OP overloading

#include <iostream>
using namespace std;

class Math
{
	public:
		float a;
		
		Math(float m)
		{
			a=m;
		}
		
		void operator +(Math obj)
		{
			cout<<"Addition : "<<a+obj.a<<endl;
		}
		
		void operator -(Math obj)
		{
			cout<<"Subtraction : "<<a-obj.a<<endl;
		}
		
		void operator *(Math obj)
		{
			cout<<"Multiplication : "<<a*obj.a<<endl;
		}
		
		void operator /(Math obj)
		{
			cout<<"Division : "<<a/obj.a<<endl;
		}
};

int main()
{
	int cc;
	float a,b;
	
	cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\n";
	cout<<"Enter Choice : ";
	cin>>cc;
	
	cout<<endl;
	
	cout<<"Enter no. : ";
	cin>>a;
	
	cout<<"Enter no. : ";
	cin>>b;
	
	cout<<endl;
	
	Math o1(a), o2(b);
	
	switch(cc)
	{
		case 1:
			o1+o2;
			break;
		
		case 2:
			o1-o2;
			break;
		
		case 3:
			o1*o2;
			break;
			
		case 4:
			o1/o2;
			break;
		
		default:
			cout<<"\nWRONG INPUT\n";
			
	}
	
	return 0;
}
