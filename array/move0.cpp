//move zero in one array
#include<iostream>
#include<vector>
using namespace std;

void moveZero(int arr[],int n){//uderstand for what ?
    int nonzero=0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0)
        {
        swap(arr[i],arr[nonzero]);
        nonzero++;
        }
    }
}
int main(){
    int arr[5] = {3,0,4,0,0};
    moveZero(arr , 5 );
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}