#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int target){

    int s=0;
    int e=n-1;
    
    while(s<=e){

        int mid = s + (e-s) / 2;

        if(arr[mid] == target){
            //milgaya milgaya
            return mid;
        }

        if(arr[mid] < target){
            //target bada tha
            s=mid+1;
        }

        else{
            //target chota tha
            e=mid-1;
        }
        //mid=s+(e-s)/2;
    }

    return -1;

}

int main(){

    int arr[]={1,3,5,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target=5;

    int index = binarysearch(arr,n,target);
    cout<< "traget is at index " << index << endl;

    return 0;

}