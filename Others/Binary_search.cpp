#include<iostream>
using namespace std;

int Binary_Search(int a[], int n, int key){
    int e=n;
    int s=0;
    while(e>=s){
        int mid = (e+s)/2;
        if(key == a[mid]){
            return mid;
        }
        else if(key>a[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,i,key;
    cout<<"Enter the size of an array";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of an array";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter key for seraching";
    cin>>key;
    cout<<Binary_Search(a, n, key)<<endl;

}