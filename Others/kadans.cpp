//Kadans Algorithm
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int current_sum = 0;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        current_sum+=a[i];
        if(current_sum<0){
            current_sum=0;}
        mx = max(current_sum,mx);
    }
    cout<<mx;
}