#include <iostream>

using namespace std;


int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact= fact*i;
    }
    return fact;
}

void pascleTriangle(int n){
    for(int i =0; i<n;i++){
        for (int j=0; j<=i; j++){
            cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
        }
        cout<<endl;
    }
    return;
}

int main()
{
    int a;
    cin>>a;

    pascleTriangle(a);

    return 0;
}


