#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

int i=1;
while(i<=n){

    //for space
    int space=n-i;
    while(space){
        cout<<" ";
        space--;
    }

    //for data
    int j=1;
    while(j<=i){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}


}