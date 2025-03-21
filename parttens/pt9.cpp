#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    while(j<=n){ 
        /*
        n>>>i
        A
        BB
        CCC
        */
        char ch='A'+j-1;
        /*
        'A'+J-1
        ABC
        ABC
        ABC
        */
        cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}


}