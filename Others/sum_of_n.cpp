//Sum of first n numbers
#include <iostream>
using namespace std;
int sum_of(int n){
    return n*(n+1)/2;
}
int main(){
    int n;
    cin>>n;
    cout<<sum_of(n);
}