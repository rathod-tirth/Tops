// Book Store

#include <iostream>
using namespace std;

class Aqua
{
	public:
		string A_a, A_tt, A_pub;
		int A_pr;
		
		void getA()
		{
			A_a="John Ryan";
			A_tt="Aqua";
			A_pub="Sunrise int.";
			A_pr=500;
		}
};

class Blue
{
	public:
		string B_a, B_tt, B_pub;
		int B_pr;
		
		void getB()
		{
			B_a="Prakash Shah";
			B_tt="Blue";
			B_pub="Dawn int.";
			B_pr=1500;
		}
};

class Red
{
	public:
		string R_a, R_tt, R_pub;
		int R_pr;
		
		void getR()
		{
			R_a="Eren Yeager";
			R_tt="Red";
			R_pub="Titan int.";
			R_pr=1999;
		}
};

class Pink
{
	public:
		string P_a, P_tt, P_pub;
		int P_pr;
		
		void getP()
		{
			P_a="Ichika Sato";
			P_tt="Pink";
			P_pub="Daisy int.";
			P_pr=1200;
		}
};

class Book : public Aqua, public Blue, public Red, public Pink
{
	public:
		int choice;
		void show()
		{
			cout<<"\n-----Welcome to Bear Bookstore-----\n";
			cout<<"\nAvailable Titles : \n";
			cout<<"1. "<<A_tt<<endl;
			cout<<"2. "<<B_tt<<endl;
			cout<<"3. "<<R_tt<<endl;
			cout<<"4. "<<P_tt<<endl;
		}
		
		void get()
		{
			cout<<"\n\nEnter value : ";
			cin>>choice;
			
			cout<<endl;
			
			switch(choice)
			{
				case 1:
					cout<<"Author : "<<A_a<<endl;
					cout<<"Title : "<<A_tt<<endl;
					cout<<"Publisher : "<<A_pub<<endl;
					cout<<"Price : Rs. "<<A_pr<<endl;
					break;
					
				case 2:
					cout<<"Author : "<<B_a<<endl;
					cout<<"Title : "<<B_tt<<endl;
					cout<<"Publisher : "<<B_pub<<endl;
					cout<<"Price : Rs. "<<B_pr<<endl;
					break;
					
				case 3:
					cout<<"Author : "<<R_a<<endl;
					cout<<"Title : "<<R_tt<<endl;
					cout<<"Publisher : "<<R_pub<<endl;
					cout<<"Price : Rs. "<<R_pr<<endl;
					break;
					
				case 4:
					cout<<"Author : "<<P_a<<endl;
					cout<<"Title : "<<P_tt<<endl;
					cout<<"Publisher : "<<P_pub<<endl;
					cout<<"Price : Rs. "<<P_pr<<endl;
					break;
					
				default :
					cout<<"\nWRONG INPUT\n";
					break;
			}
		}
};

int main()
{
	Book obj;
	
	obj.getA();
	obj.getB();
	obj.getR();
	obj.getP();
	obj.show();
	obj.get();
	
	return 0;
}
