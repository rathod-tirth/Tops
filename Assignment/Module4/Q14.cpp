// Add, Sub, Mult, Div using method overloading

#include <iostream>
using namespace std;

class Math
{
	public:
		
		void math()
		{
			int m,n;
			
			cout<<"Enter no. : ";
			cin>>n;
			
			cout<<"Enter no. : ";
			cin>>m;
			
			cout<<"Addition : "<<m+n<<endl<<endl;
		}
		
		void math(int a)
		{
			int b;
			
			cout<<"Enter no. : ";
			cin>>b;
			
			cout<<"Subtraction : "<<a-b<<endl<<endl;
		}
		
		void math(int a, int b)
		{
			cout<<"Multiplication : "<<a*b<<endl<<endl;
		}
		
		void math(float a, float b, int c)
		{
			cout<<"Division : "<<a/b<<endl<<endl;
		}
};

int main()
{
	float m,n;
		
	Math obj;
	
	obj.math();
	
	cout<<"Enter no. : ";
	cin>>m;
	
	obj.math(m);
	
	cout<<"Enter no. : ";
	cin>>n;
	
	cout<<"Enter no. : ";
	cin>>m;
	
	obj.math(m,n);
	
	cout<<"Enter no. : ";
	cin>>n;
	
	cout<<"Enter no. : ";
	cin>>m;
	
	obj.math(m,n,1);
	
	return 0;
}
