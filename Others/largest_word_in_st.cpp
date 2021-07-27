//find the largest word in the string

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();

    int i=0,st=0,maxst=0;
    int current_len=0, max_len=0;
    while(1){
        if(a[i]==' ' || a[i]=='\0'){
            max_len=max(max_len,current_len);
            maxst=st;
            current_len=0;
            st=i+1;
        }
        else{
        current_len++;}
        if(a[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<max_len<<endl;
    for(i=0;i<max_len;i++){
        cout<<a[i+maxst];
    }
}