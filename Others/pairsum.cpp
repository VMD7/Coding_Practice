//Check given k is equal to sum of pair of subarray
#include<iostream>

using namespace std;
bool pairsum(int a[], int n, int k){
    int s=0;
    int e=n-1;
    while(s<e){
        if((a[s]+a[e])==k){
            cout<<s<<" "<<e;
            return true;
        }
        else if((a[s]+a[e])<k){
            s+=1;
        }
        else{
            e-=1;
        }
    }
    return false;

}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    pairsum(a,n,k);
}