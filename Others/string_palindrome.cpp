//String to check palindrome
#include<iostream>
using namespace std;
int ispalidrome(string s){
    int l = s.size();
    int i;
    for(i=0;i<l;i++){
        if(s[i]!=s[l-i-1]){
            return 0;
            break;
        }
    }
    return 1;
}
int main(){
    string s;
    cin>>s;
    if(ispalidrome(s)){
        cout<<"It is palidrom";
    }
    else{
        cout<<"It is not palidrome";
    }
}