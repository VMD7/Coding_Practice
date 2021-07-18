//Check given number is prime or not
#include <iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
        return true;
}

int main()
{
    int n;
    cout<<"Enter Number";
    cin>>n;
    if(isPrime(n)){
        cout<<"It is a prime number";
    }
    else{
        cout<<"It is not a prime number";
    }
}