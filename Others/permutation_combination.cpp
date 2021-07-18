//calculate permutation and combination
#include <iostream>
using namespace std;
int fact(int n){
    int factorial=1,i;
    for(i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"Combination = "<<fact(n)/(fact(r)*fact(n-r))<<endl;
    cout<<"permutation = "<<fact(n)/fact(n-r)<<endl;
}