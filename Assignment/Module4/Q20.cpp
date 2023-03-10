// Multilevel Inherit

#include <iostream>
using namespace std;

class Student
{
	public:
		string name[5];
		int roll[5];
		
		void set1()
		{
			name[0]="Avinash";
			name[1]="Deev";
			name[2]="Janhvi";
			name[3]="Keshav";
			name[4]="Pallavi";
			
			roll[0]=1;
			roll[1]=5;
			roll[2]=12;
			roll[3]=23;
			roll[4]=29;
		}
};

class Test: public Student
{
	public:
		int sub1[5], sub2[5];
		
		void set2()
		{
			for(int i=0; i<5; i++)
			{
				cout<<"Roll no. "<<roll[i]<<". "<<name[i]<<": "<<endl<<"Maths: ";
				cin>>sub1[i];
				
				cout<<"Sci: ";
				cin>>sub2[i];
				
				cout<<endl;
			}
		}
};

class Result: public Test
{
	public:
		int tt[5];
		
		void set3()
		{
			for(int i=0; i<5; i++)
			{
				tt[i]=sub1[i]+sub2[i];
				
				cout<<"Roll no. "<<roll[i]<<". "<<name[i]<<" | Total marks = "<<tt[i]<<endl;
			}
		}
};

int main()
{
	Result ob;
	
	ob.set1();
	ob.set2();
	ob.set3();
	
	return 0;
}
