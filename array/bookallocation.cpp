#include<iostream>
using namespace std;

bool ispossible(int arr[],int n,int m,int mid){
    int studentcount = 1;
    int pagesum = 0;

    for(int i=0;i<n;i++){  // mid = 50

        if(pagesum+arr[i] <= mid){ // i=1,2 
            pagesum += arr[i];
        }

        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];  // i=3

        }
        if(studentcount>m){
            return false;
        }
    }
    return true;
}

int bookallocation(int arr[],int n,int m){//m=num.of student   and   n=num.ofallcationttime
    int s = 0;

    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int e=sum;
    int ans = -1;
    

    while(s<=e){
        int mid = s + (e-s)/2;
        cout << "Checking mid = " << mid << endl;

        if(ispossible(arr,n,m,mid)){
            ans = mid;
            e = mid -1;
            cout << "Possible with mid = " << mid << ", updating end to " << e << endl;

        }
        else{
            s = mid + 1;
            cout << "Not possible with mid = " << mid << ", updating start to " << s << endl;

        }
    }
    return ans;
}
int main(){
    int arr[] = {10,20,30,40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m= 2;

    int final=bookallocation(arr,n,m);
    cout<<"answer is  "<<final<<endl;


}