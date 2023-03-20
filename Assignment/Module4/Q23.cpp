// Max no. using friends function

#include <iostream>
using namespace std;

class A
{
	private:
		int a,b;
	
	friend void max(A obj);
};

void max(A obj)
{
	cout<<"Enter no. : ";
	cin>>obj.a;
	
	cout<<"Enter no. : ";
	cin>>obj.b;
	
	if(obj.a>obj.b)
	{
		cout<<"Max no. = "<<obj.a;
	}
	else
	{
		cout<<"Max no. = "<<obj.b;		
	}
}

int main()
{
	A ob;
	
	max(ob);
	
	return 0;
}
