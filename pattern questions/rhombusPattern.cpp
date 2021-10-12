#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int y=2*a -1;
    for(int i= 0; i<a; i++)
    {
        for(int j = 1; j<= y; j++)
        {
            if((a-i)<= j)
            {
                if(j<=(y-i))
                {
                    cout<<"*";
                }
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
