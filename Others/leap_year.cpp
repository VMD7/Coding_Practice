//Check given year is leap year or not
#include <iostream>

using namespace std;
bool isLeap(int n){
    if(n<1752){
        return 0;
    }
    else{
        if(((n%4==0)&& (n%100!=0)) ||(n%400==0)){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main()
{
    int n;
    cin>>n;

    if(isLeap(n)){
        cout<<"It is a leap year";
    }
    else{
        cout<<"It is not a leap year";
    }
}