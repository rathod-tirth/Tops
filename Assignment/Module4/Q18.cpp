// Cricket

#include <iostream>
using namespace std;

class Cricket
{
	public:
		int nn;
		string name[5];
		void set()
		{
			nn=5;
			name[0]="Virat Kholi";
			name[1]="MS Dhoni";
			name[2]="Rohit sharma";
			name[3]="Hardik Pandya";
			name[4]="Bhuvneshwar Kumar";
		}
};

class Batsman : public Cricket
{
	public:
		int runs[5], match[5], best[5], avg[5];
		
		void get()
		{
			for(int i=0; i<5; i++)
			{
				cout<<i+1<<". "<<name[i]<<" : "<<endl;
				cout<<"Total Runs = ";
				cin>>runs[i];
				
				cout<<"Matches Played = ";
				cin>>match[i];
				
				cout<<"Best Performance = ";
				cin>>best[i];
				
				avg[i]=runs[i]/match[i];
				cout<<"Average Score = "<<avg[i]<<endl<<endl;
			}
			
		}
		
		void show()
		{
			for(int i=0; i<5; i++)
			{
				cout<<i+1<<" "<<name[i]<<"\t| Total Runs = "<<runs[i]<<"\t| Matches Played = "<<match[i]<<"\t| Best Score = "<<best[i]<<"\t| Average Score = "<<avg[i]<<endl;
			}
		}
};

int main()
{
	Batsman ob;
	
	ob.set();
	ob.get();
	ob.show();
	
	return 0;
}
