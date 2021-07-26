//Maximum sum of circular subarray

#include<iostream>
#include<climits>
using namespace std;
int kadance(int a[], int n){
    int mx = INT_MIN,sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum<0){
            sum=0;
        
        }
        mx = max(sum, mx);
    }
    return mx;
}
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int wrapsum, nonwrapsum, totalsum=0;
    nonwrapsum = kadance(a, n);

    for(i=0;i<n;i++){
        totalsum +=a[i];
        a[i]= -a[i];
    }
    wrapsum=totalsum+kadance(a,n);
    cout<<max(wrapsum,kadance(a,n));
    cout<<
}