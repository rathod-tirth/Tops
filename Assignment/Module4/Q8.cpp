// Lecture details

#include <iostream>
#include <string>
using namespace std;

class Lect
{
	public:
		string name[5], sub[5], course[5], details[5];
		int lect[5], lim;
		
		void set() 
		{
			lim=5;
			name[0]="Purohit"; sub[0]="Hindi"; course[0]="12th"; lect[0]=4;
			name[1]="Megha"; sub[1]="Science"; course[1]="12th"; lect[1]=5;
			name[2]="Hitesh"; sub[2]="Maths"; course[2]="12th"; lect[2]=5;
			name[3]="Jasmine"; sub[3]="English"; course[3]="12th"; lect[3]=4;
			name[4]="Siddharth"; sub[4]="Computer"; course[4]="12th"; lect[4]=4;
		}
		
		void show()
		{
			cout<<"\nLecturer Details : \n\n";
			for(int i=0; i<lim; i++) { cout<<"Name : "<<name[i]<<endl<<"Sub : "<<sub[i]<<endl<<"Course : "<<course[i]<<endl<<"Lectures : "<<lect[i]<<endl<<endl;}
		}
		
		void get() 
		{ 
			cout<<"Enter Lecture Details :- ";
			for(int i=0; i<lim; i++)
			{
				cout<<endl<<i+1<<" For "<<name[i]<<" : ";
				getline(cin, details[i]);
			}
		}
		
		void show2()
		{
			for(int i=0; i<5; i++)
			{
				cout<<"\nName : "<<name[i]<<" | Details : "<<details[i]<<endl;
			}
		}
};

int main()
{
	Lect obj;
	
	obj.set();
	obj.show();
	obj.get();
	obj.show2();

	return 0;
}
