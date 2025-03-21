#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &are,int k){
    vector<int>temp(are.size());
    int n=are.size();
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=are[i];
    }
    are=temp;
}

void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int nums[]={1,3,5,7,9};
    vector<int> arr(nums,nums+5);

    rotate(arr,3);

    for(int j=0;j<arr.size();j++){
        cout<<arr[j];
    }
    cout<<endl;

    return 0;
}