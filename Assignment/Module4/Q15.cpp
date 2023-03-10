// Matix Addition using OP Overloading

#include <iostream>
using namespace std;

class Add
{
	public:
		int m[3];
		
		Add(int a[])
		{
			for(int i=0; i<3; i++)
			{
				m[i]=a[i];
			}
		}
		
		void operator +(Add obj)
		{
			for(int i=0; i<3; i++)
			{
				cout<<m[i]+obj.m[i]<<" ";
			}
		}
};

int main()
{
	int a[3]={3,5,6}, b[3]={7,5,4};
	
	Add o1(a), o2(b);
	
	o1+o2;
	
	return 0;
}
