//pascal_triangle
/*
1
11
121
1331
14641
*/
#include <iostream>
using namespace std;
int fact(int n){
    int factorial=1,i;
    for(i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int pascal_triangle(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j));
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pascal_triangle(n);
}