//Take sum of all prime numbers between two numbers
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
    int i;
    if(n==1){
        return 0;
    }
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a,b,i,sum=0;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        if(isPrime(i)){
            sum=sum+i;
        }
    }
    cout<<sum;
}