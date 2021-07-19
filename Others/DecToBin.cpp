//Decimal to binary
#include <iostream>
using namespace std;
int DecToBin(int n){
    int i=1, r=0,ans=0;
    while(n>0){
        r=n%2;
        n=n/2;
        ans = ans + (r*i);
        i*=10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<DecToBin(n)<<endl;
}