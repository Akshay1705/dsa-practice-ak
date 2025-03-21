#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

int i=1;
char start='A';
while(i<=n){
    int j=1;
    //char start='A'+n-i;
    while(j<=n)
    /*
    n>>>i
    A
    BC
    DEF
    */
    {
        cout<<start;
        start++;
        j++;
    }
    cout<<endl;
    i++;
}



}