#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i;
        /*
         if *>>i 
         output: 1
                 22
                 333
                 4444   
        */
        j++;
    }
    cout<<endl;
    i++;
}

}