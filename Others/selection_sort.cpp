#include<iostream>
using namespace std;
void insertion_sort(int a[], int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    insertion_sort(a, n);
}