/*Write a function that takes a number as input 
if the given number is a Fibonacci number, 
prints the number otherwise, print the sum of all 
even Fibonacci numbers less than the given number.*/

#include <iostream>
using namespace std;
int Solve_Fibonacci(int n){
    int i,t1=0,t2=1,next_num=0,sum=0;
    for(i=1;i<=n;i++){
        if(n==t1){
            return n;
        }
        else if((t1<=n)  & (t1%2==0)){
            sum=sum+t1;
        }
        next_num=t1+t2;
        t1=t2;
        t2=next_num;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<Solve_Fibonacci(n)<<endl;
}