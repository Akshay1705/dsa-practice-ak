#include<iostream>
using namespace std;

int main(){

    int arr[5]={3,2,1,5,6};
    int result=0;
    for(int i=0;i<=5;i++){
        result=result+arr[i];
    }
    cout<<"your answer is "<< result;
}
//your answer is 22