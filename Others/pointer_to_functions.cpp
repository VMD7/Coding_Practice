//pointers to functions
#include<iostream>
using namespace std;

void increment(int *ptr){
    *ptr++;
}
int main(){
    int a=10;
    
    increment(&a);
    cout<<a<<endl;
}