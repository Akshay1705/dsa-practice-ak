#include<iostream>
using namespace std;

int getpivot(int arr[],int n){
  
  int s = 0;
  int e = n-1;
  int Iteration = 0;
  while(s<e){
    
    int mid = s + (e-s)/2;
    cout << "Iteration " << Iteration << ": s = " << s << ", e = " << e << ", mid = " << mid << endl;
    cout << "Comparing arr[mid] (" << arr[mid] << ") with arr[0] (" << arr[0] << ")" << endl;

    if(arr[mid] >= arr[0]){
      s = mid + 1;
    }
    else{
      e = mid;
    }
    // if(s == e){
    //   cout<<" e n d "<<e<<"   star t  "<<s<<endl;
    // }
    Iteration++;
  }
  cout<<"your pivot value is  "<< s <<endl ;
  return s;
}

int binarysearch(int arr[],int n,int m,int target){


    int s=n;
    int e=m;
    
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

int findPosition(int arr[],int n,int k){
    int pivot=getpivot(arr,n);

    if( k >= arr[pivot] && k <= arr[n-1] ){
        return binarysearch(arr,pivot,n-1,k);
    }
    else{
        return binarysearch(arr,0,pivot-1,k);
    }

}

int main(){

    int arr[]={3,4,5,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout<<"enter your target value ";
    cin>>k;
    int index = findPosition(arr,n,k);
    if(index>=0){
        cout<<"yes your index is "<< index<<endl;
    }
    else{
        cout<<"no element available"<<endl;
    }
    
    return 0;
}