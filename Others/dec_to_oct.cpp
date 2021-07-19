//Decimal to Octal
#include <iostream>
using namespace std;
int DecToOct(int n){
    int i=1, r=0,ans=0;
    while(n>0){
        r=n%8;
        n=n/8;
        ans = ans + (r*i);
        i*=10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<DecToOct(n)<<endl;
}
