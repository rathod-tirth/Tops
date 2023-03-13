// Inline Funtion

#include <iostream>
using namespace std;

inline int square(int a) { return a*a; }
inline int cube(int a) { return a*a*a; }

int main()
{
	int m;
	
	cout<<"Enter no. : ";
	cin>>m;
	
	cout<<"Square = "<<square(m)<<endl;
	cout<<"Cube = "<<cube(m)<<endl;
	return 0;
}
