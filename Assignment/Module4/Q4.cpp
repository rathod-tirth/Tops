// Addition of Matrix using classf

#include <iostream>
using namespace std;

class A
{
    public:

    void display()
    {
        int a[3][3]={{3,10,4},{7,5,2},{11,9,6}}, b[3][3]={{15,2,1},{7,14,3},{9,6,8}};

        cout<<"Matrix 1 : \n\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        cout<<"Matrix 2 : \n\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        cout<<"Addition of Matrix 1 and 2 : \n\n";
        for (int i = 0; i < 3; i++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout<<a[i][k]+b[i][k]<<" ";
            }
            cout<<endl;
        }
        
    }
};

int main()
{
    A obj;
    obj.display();

    return 0;
}