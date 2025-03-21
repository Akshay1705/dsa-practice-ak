#include<iostream>
using namespace std;

int firstocurrence(int arr[],int n,int target){

    int s = 0;
    int e = n - 1;
    int ans = -1;

    while(s<=e){

        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            ans=mid;        //game
            e = mid - 1;    //game
        }

        else if(arr[mid] < target){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }
    }

    return ans;
}

int lastoccurence(int arr[],int n,int target){
    
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){

        
        if(arr[mid] == target){
            ans=mid;             //game
            s = mid + 1;         //game
        }

        else if(arr[mid] < target){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;

}

int main(){
    int arr[] = {1,2,3,3,3,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3 ;

    int fo = firstocurrence(arr,n,target);
    int lo = lastoccurence(arr,n,target);

    cout<<"("<<fo<<","<<lo<<")"; // output is (2,4)
    cout<<endl;

    //total no occurence code is same as above just add below game

    int totaloccur = ( lo - fo ) + 1;

    cout<<"total no. of occurence  "<<totaloccur;

    return 0;

}