//check palindrome or not
#include <iostream>
using namespace std;
void isPalindrome(int n){
    int r=0,new_num=0;
    int m=n;
    while(n>0){
        r=n%10;
        new_num = new_num*10 + r;
        n/=10;
    }
    if(new_num == m){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }
}
int main(){
    int n;
    cin>>n;
    isPalindrome(n);
}