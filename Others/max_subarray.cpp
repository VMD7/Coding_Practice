//Max sum of subarray
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx = INT_MIN;
    int sum=0;
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<n;j++){
            sum+=arr[j];
        }
        mx = max(mx,sum);
    }
    cout<<mx<<endl;
}