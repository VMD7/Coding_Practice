#include<iostream>
using namespace std;
void insertion_sort(int a[], int n)
{
    int i;
    for(i=1;i<n;i++){
        int current = a[i];
        int j=i-1;
        while(a[j]>current && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    insertion_sort(a,n);
}