// Matrix using class

#include <iostream>
using namespace std;

class mat
{
	public:
		void rix()
		{
			int a[3][3]={{3,5,1},{2,6,7},{4,11,8}};
			
			for(int i=0; i<3; i++)
			{
				for(int j=0; j<3; j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		}
};

int main()

{
	mat obj;
	obj.rix();
	
	return 0;
}






