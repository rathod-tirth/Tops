// concatenate strings using OP overloading

#include <iostream>
using namespace std;

class Add
{
	public:
		string ss;
		
		Add(string ff)
		{
			ss=ff;
		}
		
		void operator +(Add obj)
		{
			cout<<ss<<obj.ss;
		}
};

int main()
{
	string ll="Space", zz="Ship";
	
	Add o1(ll), o2(zz);
	
	o1+o2;
	
	return 0;
}
