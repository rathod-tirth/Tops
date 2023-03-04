// Bank Account

#include <iostream>
using namespace std;

class A
{
    public:

    string name, name2, type;
    long long num, num2, amo=1000000; 
    int choice,depo,with;

    void get()
    {
        cout<<"\n\n----------Money Bank-----------\n\n";
        cout<<"\n\n---------Registration----------\n\n";
        
        cout<<"Enter Name : ";
        cin>>name;

        cout<<"Enter Account no. : ";
        cin>>num;

        cout<<"Enter Account Type : ";
        cin>>type;

        cout<<"Enter Total Amount : ";
        cin>>amo;
    }

    void login()
    {
        cout<<"\n\n---------Login Page----------\n\n";
        cout<<"Enter Name : ";
        cin>>name2;

        cout<<"Enter Account no. : ";
        cin>>num2;

        if (name2==name && num2==num)
        {
            cout<<endl<<endl;
                
            cout<<"1. To Check Balance\n";
            cout<<"2. To Deposit an amount\n";
            cout<<"3. To check balance and Withdraw an amount\n";
            
            cout<<"Enter your choice : ";
            cin>>choice;
            
            cout<<endl;

            switch (choice)
            {
            case 1:
                cout<<"Your Balance : "<<amo;
                break;

            case 2:
                cout<<"Enter an Amount : ";
                cin>>depo;
                amo+=depo;
                
                cout<<"\nTranscation Successful\n";
                cout<<"Your Balance : "<<amo;

                break;

            case 3:
                cout<<"Your Balance : "<<amo<<endl;
                
                cout<<"Enter an Amount :";
                cin>>with;
                amo-=with;

                cout<<"\nTranscation Successful\n";
                cout<<"Your Balance : "<<amo;

                break;

            default:
                cout<<"\nWRONG INPUT\n";
                break;
            }
        }
        else
        {
            cout<<"\nIncorrect Username or Account number\n";
        }
        
    }
};

int main()
{
    A obj;

    obj.get();
    obj.login();

    return 0;
}