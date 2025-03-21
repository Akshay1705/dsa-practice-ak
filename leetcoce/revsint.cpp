//reverse the integer
#include<iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int ans=0;
    while(n!=0){
        int digit=n%10;
        //exeption for out of range of int
        if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
            cout<<"out of range not posibl";
        }
        ans=(ans*10) + digit;
        n=n/10;
    }
    cout<<ans;
}