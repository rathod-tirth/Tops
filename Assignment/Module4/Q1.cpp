// Fibonacci series and Factorial

#include <iostream>
using namespace std;

class A
{
	public:
		
		void fibo()
		{
			int a, count=0, temp, f=0, i=0;
			
			cout<<"----Fibonacci Series-----"<<endl<<"Enter any no : ";
			cin>>a;
					
			cout<<"Fibonacci Series : ";
					
			while(count<a)
			{
				f+=i;
				cout<<f<<" ";
						
				temp=f;
				f=i;
				i=temp;
				
				if(i==0)
				{
					i++;
				}
						
				count++;
			}
		}
		
		void fact()
		{
			int a;
			
			cout<<endl<<endl<<"----Factorial-----"<<endl<<"Enter any no. : ";
			cin>>a;
			
			for(int i=a-1; i>0; i--)
			{
				a*=i;
			}
			
			cout<<"Factorial : "<<a;	
		}
		
};

int main()

{
	A f;
	
	f.fibo();
	f.fact();
	
	return 0;
}

/*

Factorial

5*4*3*2*1=120

5*4=20
20*3=60
60*2=120
120*1=120

sum=sum*5
*/






