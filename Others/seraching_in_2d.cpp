//Searching in 2D matrix
#include<iostream>
using namespace std;

int main(){
    int n,m,i,j,target;
    bool flag = false;
    cin>>n>>m>>target;
    int a[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int r=0,c=m-1;

    while(r<n && c>=0){
        if(a[r][c]==target){
            flag = true;  
        }
        else if(a[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }

    if(flag){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is not present";
    }

}