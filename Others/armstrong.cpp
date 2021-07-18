//check armstrong number
#include <iostream>
using namespace std;
int cube(int r){
    return r*r*r;
}
bool isArmstron(int n){
    int r=0,sum=0;
    int m=n;
    while(n>0){
        r=n%10;
        sum=sum+cube(r);
        n/=10;
    }
    if(m>0 & m<10){
        return 1;
    }
    else if(sum==m){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    if(isArmstron(n)){
        cout<<"It is an armstrong number";
    }
    else{
        cout<<"It is not an armstrong number";
    }
}