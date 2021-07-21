//linear serach of an element in an array
#include<iostream>
using namespace std;
void linear_serach(int a[], int n, int key){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key){
            cout<<"key is "<<i;
        }
    }

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
    linear_serach(a, n, key);
}