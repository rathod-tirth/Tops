// Marksheet using class

#include <iostream>
using namespace std;

class Mark
{
	public:
		
		void show()
		{
			cout<<"Rollno.\tSub1\tSub2\tSub3\tTotal\tPercentage"<<endl;
			cout<<"1\t30\t25\t45\t100\t"<<endl;
			cout<<"2\t25\t20\t25\t70\t"<<endl;
			cout<<"3\t20\t15\t35\t70\t"<<endl;
			cout<<"4\t35\t30\t40\t105\t"<<endl;
		}
};

int main()
{
	Mark obj;
	obj.show();
	
	return 0;
}
