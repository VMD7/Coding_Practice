//Print max and min of array
#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    int max_no = INT_MIN;
    int min_no =INT_MAX;
    for(i=0;i<n;i++){
        if(a[i]>max_no){
            max_no=a[i];
        }
        if(a[i]<min_no){
            min_no=a[i];
        }
    }
    cout<<max_no<<endl<<min_no<<endl;
}
