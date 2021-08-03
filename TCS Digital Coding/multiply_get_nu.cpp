/*Write a program to find smallest integer value b for a given value of a. If we multiply the digits of b, we should get exact value of a.*/
#include<bits/stdc++.h>
using namespace std;

int helper(int n){
    int i;
    if(n<9){
        return n+10;
    }
    stack<int> s;
    for(i=9;i>2;i--){
        while(n%i==0){
            s.push(i);
            n/=i;
        }
    }
    if(n!=1){
        return -1;
    }
   int b=0;
   while(!s.empty()){
       int x = s.top();
       s.pop();
       b=b*10 +x;
   }
   return b;
}
int main(){
    int n;
    cin>>n;
    cout<<helper(n);
}