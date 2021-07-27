//Spiral order matrix traversal

#include<iostream>
using namespace std;

int main(){
    int row,col,i,j;
    cin>>row>>col;
    int a[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>a[i][j];
        }
    }

    int row_s=0;
    int col_s=0;
    int row_e=row-1;
    int col_e=col-1;

    while(row_s<=row_e && col_s<=col_e){

        //row start
        for(col=col_s;col<=col_e;col++){
            cout<<a[row_s][col]<<" ";
        }
        row++;

        //col end
        for(row=row_s;row<=row_e;row++){
            cout<<a[row][col_e];
        }
        col_e--;

        //for row end
        for(col=col_e;col>=col_s;col--){
            cout<<a[row_e][col]<<" ";
        }
        row_e--;

        //for col start
        for(row=row_e;row>=row_s;row--){
            cout<<a[row][col_s];
        }
        col_s++;
    }
}