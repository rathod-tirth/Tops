// Array sorting using Templates

#include <iostream>
using namespace std;

template <typename T>

class A
{
	public:
		T a[5],temp;
		
		void sort()
		{
			for(int i=0; i<5; i++)
			{
				cout<<"Enter no. : ";
				cin>>a[i];
			}
			
			for(int i=0; i<5; i++)
			{
				for(int j=i+1; j<5; j++)
				{
					if(a[i]>a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			cout<<"Ascending Order: ";
			
			for(int i=0; i<5; i++)
			{
				cout<<a[i]<<" ";
			}
		}
};

int main()
{
	A <int>obb;
	obb.sort();
	
	return 0;
}
