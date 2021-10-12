#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int N = n;
    int num = 0;
    while(n>0){
        int lastdigit = n%10;
        num = num + pow(lastdigit,3) ;
        n = n/10;
    }
    if(N==num){
        cout<<N<<" is an armastrong number";
    }else{
        cout<<N<<" is not an armastrong number";
    }
    return 0;
}
