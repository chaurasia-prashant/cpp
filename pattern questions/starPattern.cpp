#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i= 1; i<=a; i++)
    {
        for(int j=0; j<=a-i; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=2*i -1; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i= 1; i<=a; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=2*(a-i)+1; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
