#include <iostream>

using namespace std;


int btd(int n){

    int ans =0;
    int x=1;

    while(n>0){
        int y = n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}

int otd(int n){

    int ans =0;
    int x=1;

    while(n>0){
        int y = n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}




int main()
{
    int a;
    cin>>a;

    cout<<"otd :"<<otd(a);


    return 0;
}


