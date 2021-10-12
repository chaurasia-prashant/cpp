#include <iostream>
using namespace std;

int main()
{

int a;

cin>>a;

int x = 0;
for(int i= 1 ; i<=2*a; i++){
    for(int j = 1; j<= 2*a; j++){

       if(i<=a){
            int n = 2*a - i;
        if(j<=i || j> n){
        cout<<"*";
       }
       else{
        cout<<" ";
       }
       }  else{
       int m = 2*a - j + 1;
       if(i<=j  || i<= m){
        cout<<"*";
       }
       else{
        cout<<" ";
       }

       }


    }
    cout<<endl;
}
return 0;
}
