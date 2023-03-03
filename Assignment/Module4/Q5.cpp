// Bank Account

#include <iostream>
using namespace std;

class A
{
    public:

    string name;
    int num, amo, type;

    void get()
    {
        cout<<"\n\n----------Money Bank-----------\n\n";
        
        cout<<"Name of the Depositor : ";
        cin>>name;

        cout<<"Account no. : ";
        cin>>num;
    }
};

int main()
{
    A obj;
    obj.get();

    return 0;
}