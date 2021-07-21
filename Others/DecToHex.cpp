#include<iostream>
using namespace std;
void DecToHex(int n){
    int r=0;ans=0;
    while(n>0){
        r=n%16;
        if(n>=0 && n<=9){
            ans = ans*10 + r;
        }
        else if(n>=10 && n<=16){
            ans = ans*10 + r;
        }
    }
}
int main(){
    int n;
    cin>>n;
    DecToHex(n);
}