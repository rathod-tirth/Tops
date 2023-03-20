// Swapping using templates

#include <iostream>
using namespace std;

template <typename T>

class A
{
	public:
		T a,b,temp;
		
		void swap()
		{
			cout<<"Enter no. : ";
			cin>>a;
			
			cout<<"Enter no. : ";
			cin>>b;
			
			cout<<"\nBefore swapping : a="<<a<<" b="<<b<<endl;
			
			temp=a; a=b; b=temp;
			
			cout<<"\nAfter swapping : a="<<a<<" b="<<b;
		}
};

int main()
{
	A <int>obb;
	
	obb.swap();
	
	return 0;
}
