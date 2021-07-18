//reverse_a_number
#include <iostream>
using namespace std;
void reverse_a_number(int n){
    int r=0,new_num=0;
    while(n>0){
        r=n%10;
        new_num = new_num*10 + r;
        n/=10;
    }
    cout<<new_num;
}
int main(){
    int n;
    cin>>n;
    reverse_a_number(n);
}