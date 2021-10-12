#include <iostream>

using namespace std;


int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact= fact*i;
    }
    return fact;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int factA = factorial(a);
    int factB = factorial(b);
    cout<<factA<<endl<<factB;

    return 0;
}


