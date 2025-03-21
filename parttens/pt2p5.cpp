#include<iostream>
using namespace std;

int main(){
//input
int num;
cout<<"enter num : ";
cin>>num;
//for column
int col=1;
while(col<=num){
    //for row
    int row=1;
    while(row<=num){
        //what you want to print
        cout<<col;
        row = row + 1;
    }
    cout<<endl;
    col = col + 1;
}


    return 0;
}