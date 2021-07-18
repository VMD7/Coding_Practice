//Check given numbers are triplet or not
#include <iostream>
using namespace std;
int isTriplet(int x, int y, int z){
    int a,b,c;
    a=max(x,max(y,z));
    b=(x*x)+(y*y)+(z*z)-(a*a);
    if(b==(a*a))
    return 1;
    else
    return 0;
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(isTriplet(x,y,z)){
        cout<<"It is pythogorous triplet";
    }
    else{
        cout<<"It is not pythogorous triplet";
    }
}