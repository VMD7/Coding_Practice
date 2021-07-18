//factorial of a number
#include <iostream>
using namespace std;
int fact(int n){
    int i,factorial=1;
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}