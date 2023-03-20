// Swapping using Friend

#include <iostream>
using namespace std;

class A
{
	private:
		int a,b,temp;
		
	friend void swap(A obj);
};

void swap(A obj)
{
	cout<<"Enter no. : ";
	cin>>obj.a;
	
	cout<<"Enter no. : ";
	cin>>obj.b;
	
	cout<<"\nBefore swapping : a="<<obj.a<<" b="<<obj.b<<endl;
	
	obj.temp=obj.a; obj.a=obj.b; obj.b=obj.temp;
	
	cout<<"\nAfter swapping : a="<<obj.a<<" b="<<obj.b;
}

int main()
{
	A ob;
	
	swap(ob);
	
	return 0;
}
