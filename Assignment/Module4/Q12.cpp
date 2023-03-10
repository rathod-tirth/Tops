// Area of Circle, Rectangle, Triangle using method overloading 

#include <iostream>
using namespace std;

class Area
{
	public:
		void area(float r,float pi=3.141)
		{
			cout<<"\nRadius of the Circle = "<<pi*r*r<<endl<<endl;
		}
		
		void area(int l, int b)
		{
			cout<<"\nArea of the Rectangle = "<<l*b<<endl<<endl;
		}
		
		void area(int l, int al, float h)
		{
			cout<<"\nArea of the triangle = "<<h*l*al<<endl<<endl;
		}
};

int main()
{
	float rr;
	int ll, bb, lt, la;
	
	Area obj;
	
	cout<<"\n\n----Cirlce----\n\n";
	cout<<"Enter Radius : ";
	cin>>rr;
	
	obj.area(rr);
	
	cout<<"\n\n----Rectangle----\n\n";
	cout<<"Enter Length : ";
	cin>>ll;
	
	cout<<"Eneter Breath : ";
	cin>>bb;
	
	obj.area(ll,bb);
	
	cout<<"\n\n----Triangle----\n\n";
	cout<<"Enter Length : ";
	cin>>lt;
	
	cout<<"Enter Altitude : ";
	cin>>la;
	
	obj.area(lt,la,0.5);
	
	return 0;
}
