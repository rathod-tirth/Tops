// Multiple Inherit

#include <iostream>
using namespace std;

class Student
{
	public:
		string ss[5];
		int as[5], per[5];
		
		void set1()
		{
			ss[0]="Avinash";
			ss[1]="Deev";
			ss[2]="Janhvi";
			ss[3]="Keshav";
			ss[4]="Pallavi";
			
			as[0]=17;
			as[1]=16;
			as[2]=19;
			as[3]=19;
			as[4]=16;
			
			cout<<"\n\n---Student---\n\n";
			
			for(int i=0; i<5; i++)
			{
				cout<<i+1<<". "<<ss[i]<<" | Per = ";
				cin>>per[i];
			}
		}
};

class Teacher
{
	public:
		string tt[5];
		int ts[5], sal[5];
		
		void set2()
		{
			tt[0]="Anil";
			tt[1]="Danish";
			tt[2]="Pankaj";
			tt[3]="Susmita";
			tt[4]="Radha";
			
			ts[0]=35;
			ts[1]=25;
			ts[2]=42;
			ts[3]=36;
			ts[4]=26;
			
			cout<<"\n\n---Teacher---\n\n";
			
			for(int i=0; i<5; i++)
			{
				cout<<i+1<<". "<<tt[i]<<" | Salary = ";
				cin>>sal[i];
			}
		}
};

class Name: public Student, public Teacher
{
	public:
		void show()
		{
			cout<<"\n\n---Student---\n\n";
			
			for(int i=0; i<5; i++)
			{
				cout<<i+1<<". Name: "<<ss[i]<<" | Age: "<<as[i]<<" | Per: "<<per[i]<<endl;
			}
			
			cout<<"\n\n---Teacher---\n\n";
			
			for(int i=0; i<5; i++)
			{
				cout<<i+1<<". Name: "<<tt[i]<<" | Age: "<<ts[i]<<" | Salary: "<<sal[i]<<endl;
			}
		}
};

int main()
{
	Name ob;
	
	ob.set1();
	ob.set2();
	ob.show();
	
	return 0;
}
