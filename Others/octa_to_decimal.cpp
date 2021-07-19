//octal to decimal
#include <iostream>

using namespace std;
int OctToDec(int n){
    int r=0,sum=0,t=1;
    while(n>0){
        r=n%10;
        sum = sum + (r*t);
        t*=8;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<OctToDec(n)<<endl;
}