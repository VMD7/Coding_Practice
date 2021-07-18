#include <iostream>
#include<cmath>
using namespace std;

int BinToDec(int n){
    int r=0,sum=0,i=0;
    while(n>0){
        r=n%10;
        sum = sum+(pow(2,i)*r);
        n=n/10;
        i++;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter Number";
    cin>>n;
    cout<<BinToDec(n);
}