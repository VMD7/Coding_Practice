//Print n fabanocci numbers
#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    for(i=0;i<n;i++){
        if(i==0)
        cout<<0;
        if(i==1)
        cout<<1;
        else{
            i= i-1 + i-2;
            cout<<i;
        }
    }
}