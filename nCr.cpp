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
    int result = factorial(a)/(factorial(a-b)*factorial(b));
    cout<<result;

    return 0;
}


