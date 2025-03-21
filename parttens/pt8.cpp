#include<iostream>
using namespace std;
int main(){

int n ;
cin>>n ;
int i = 1 ;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<(i-j+1);
        /*
        i+j-1
        1
        23
        345
        4567
        */
        j++;
    }
    cout<<endl;
    i++;
}
    return 0;
}