/* Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:
1) The numberof visitors on the day is strictly larger than the number of visitors
on each of the previous day.
2) either it is the last day , or the number of visitors on the day is strictly larger than the number of visitors on
the following day. 
Note that the very ffirst day could be a record breaking day!
Please help isyana find out the number of record breaking days.
*/

#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(i==1){
        cout<<"1"<<endl;
        return 0;
    }

    int count=0;
    int mx=-1;
    for(i=0;i<n-1;i++){
        if(a[i]>mx && a[i]>a[i+1]){
        count+=1;
        
        }
        mx=max(a[i],mx);
    }
    

cout<<count<<endl;
}