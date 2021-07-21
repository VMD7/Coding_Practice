//Bubble Sort
#include<iostream>
using namespace std;
void bubble_sort(int a[], int n){
    int j, i;
    for(j=0;j<n-1;j++){
        for(i=0;i<n;i++){
            if(a[i]>a[i+1]){
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    bubble_sort(a, n);
} 
