//given a matrix, calculate the absolute difference between the sums of its diagonals.
#include<iostream>
using namespace std;

int main(){
   int n,i,j,sum=0,sum1=0,diff;
   cin>>n;
   int a[n][n];
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           cin>>a[i][j];
       }
   } 
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           if(i==j){
               sum+=a[i][j];
           }
           if(i==(n-j-1)){
               sum1+=a[i][j];
           }
       }
   }
   diff = abs(sum-sum1);
   cout<<diff;
}