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
   i=0;
   j=0;
   while(i!=n and j!=n){
       sum +=a[i][j];
       i++;
       j++;
   }
   i=0;
   j=n-1;
   while(i!=n and j>=0){
       sum1+=a[i][j];
       i++;
       j--;

   }
   diff = abs(sum-sum1);
   cout<<diff;
}