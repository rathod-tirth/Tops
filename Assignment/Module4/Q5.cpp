// Bank Account

#include <iostream>
using namespace std;

class A
{
    public:

    string name, type;
    int num, amo, choice, depo, with;

    void get()
    {
        name="Tirth";
        type="Saving";
        num=32468447;
        amo=1000000;
        // cout<<"\n\n----------Money Bank-----------\n\n";
        
        // cout<<"Enter Name of the Depositor : ";
        // cin>>name;

        // cout<<"Enter Account no. : ";
        // cin>>num;

        // cout<<"\nType of Account : \n1. Saving Account\n2. Current Account\n3. Salary Account\n\nEnter : ";
        // cin>>type;

        // cout<<"Enter Total Balance in Account : ";
        // cin>>amo;
    }

    void set()
    {
        cout<<"\n\n1. To Deposit an amount\n2. To check balance\n3. To Withdraw\nEnter your choice :";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"\nEnter amount you want to deposit : ";
            cin>>depo;
            break;
        
        case 2:
            cout<<endl<<name<<endl;
            cout<<"Your Balance : "<<amo;
            break;

        case 3:
            cout<<"\n Your Balance : \n"<<amo;
            cout<<"How Much would you like to withdraw : ";
            cin>>with;
            break;
        
        default:
            cout<<"\nWrong Input\n";
            break;
        }
    }
};

int main()
{
    A obj;

    obj.get();
    obj.set();

    return 0;
}