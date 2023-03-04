// Lecture details

#include <iostream>
using namespace std;

class Lecture
{
	public:
		string name[5], sub[5], course[5];
		int lect[5];
		
		void get()
		{
			for(int i=0; i<5; i++)
			{
				cout<<"Enter Lecturer Name : ";
				cin>>name[i];
				
				cout<<"Enter Subject : ";
				cin>>sub[i];
				
				cout<<"Enter Course : ";
				cin>>course[i];

				cout<<"Enter no. of lectures : ";
				cin>>lect[i];
				
				cout<<endl;
			}
		}
};

class Detail : public Lecture
{
	public:
		string detail[5];
		
		void get2()
		{
			for(int i=0; i<5 ; i++)
			{
				cout<<"Enter lecturer Details for "<<name[i]<<" : ";
				cin>>detail[i];
				
				cout<<endl;
			}	
		}
		
		void show()
		{
			for(int i=0; i<5; i++)
			{
				cout<<i+1<<" "<<name[i]<<" : "<<detail[i]<<endl;
			}
		}
		
};

int main()
{
	Detail obj;
	
	obj.get();
	obj.get2();
	obj.show();
	
	return 0;
}








