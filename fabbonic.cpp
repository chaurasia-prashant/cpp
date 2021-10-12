#include <iostream>
#include <cmath>
using namespace std;


void fab(int a)
{
    int t1 =0;
    int t2 =1;
    int nextTerm = 0;
    for(int i = 0; i<a; i++)
    {
        cout<<t1<<endl;
        nextTerm = t1+t2;
        t1=t2;
        t2= nextTerm;

    }
    return;
}

int main()
{
    int a;
    cin>>a;
    fab(a);

    return 0;
}


