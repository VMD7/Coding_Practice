//print fabonaci sequence till the given number
#include <iostream>
using namespace std;
int main(){
    int i,n,t1=0,t2=1,next_num=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<t1;
        next_num=t1+t2;
        t1=t2;
        t2=next_num;
    }
}