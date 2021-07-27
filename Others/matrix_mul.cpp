//Matrix multiplication
#include<iostream>
using namespace std;

int main(){
    int n1,m1,n2,m2,i,j,k;
    cin>>n1>>m1>>n2>>m2;
    
    int a[n1][m1],b[n2][m2];
    for(i=0;i<n1;i++){
            for(j=0;j<m1;j++){
                cin>>a[i][j];
            }
    }
    for(i=0;i<n2;i++){
            for(j=0;j<m2;j++){
                cin>>b[i][j];
            }
    }

    
    
        int c[n1][m2];
        for(i=0;i<n1;i++){
            for(j=0;j<m2;j++){
                c[i][j]=0;
            }
        }

        for(i=0;i<n1;i++){
            for(j=0;j<m2;j++){
                for(k=j;k<n2;k++){
                    c[i][j]+= (a[i][k]*b[j][k]);
                }
            }
        }

        for(i=0;i<n1;i++){
            for(j=0;j<m2;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }

   
}