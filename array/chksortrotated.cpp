#include<iostream>
#include<vector>
using namespace std;

bool check(const vector<int> &nums,int n){//Usage of const: The nums vector is passed as const to the check function to ensure it is not modified inside the function.

    int cnt=0;

    for(int i=1;i<n;i++){
        if(nums[i] < nums[i-1]){ //badha element tene agad vada thi moto hovo joie
        cnt++;
        }
    }

    if(nums[n-1] > nums[0]) //in sorted rotated array first > last always
    {
        cnt++; //1 onle occures by this if sorted & rotated
        }

    return cnt <= 1; //1 kato 0 baki false
}

int main(){

    int arr[]= {4, 5, 1, 2, 3};//{9, 7, 5, 3, 1}   Not sorted and rotated
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> nums(arr,arr+n);

    bool issortedrotated = check(nums,n);//for if else condition

    if(issortedrotated){
        cout <<"the array is sorted rotated "<<endl;
    }
    else{
        cout<<"the array in not sorted rotated"<<endl;
    }

    return 0;

}