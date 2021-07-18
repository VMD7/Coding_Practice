//factorial of a number using recurrsion
#include <iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    if(n==0 | n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}