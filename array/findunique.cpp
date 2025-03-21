#include<iostream>
using namespace std;

int findunique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
        //cout <<ans<<endl;
    }
    return ans;
}


int main(){

    int arr[8]={3,7,2,2,7,3,4};
    cout <<"the ans is "<< findunique(arr,8);
    }
//clear your douts why ? 3,3,3 not give actual answer 7

//int check=3^7^2^2^7^3^3^4;
//cout << check;