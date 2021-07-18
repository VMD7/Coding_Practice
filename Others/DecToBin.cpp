
#include <iostream>
using namespace std;

int DecToBin(int n){
    int r=0,sum=0,i=0,q=0;
    while(n>0){
        r=n%2;
        sum = (sum*10)+r;
        n=n/2;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter Number";
    cin>>n;
    cout<<DecToBin(n);
}