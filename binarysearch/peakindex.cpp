#include <iostream>
using namespace std;

int peakIndex(int arr[] , int n){
  
  int s = 0;
  int e = n-1;
  int Iteration = 0;
  
  while(s<e){
    int mid = s + (e - s) / 2;
    cout << "Iteration " << Iteration << ": s = " << s << ", e = " << e << ", mid = " << mid << endl;
    cout << "Comparing arr[mid] (" << arr[mid] << ") with arr[mid + 1] (" << arr[mid + 1] << ")" << endl;

    if(arr[mid] < arr[mid + 1]){
      s = mid + 1;
    }
    else{
      e=mid;
    }
    Iteration++;
  }
  
  return s;
}

int main() 
{
    int arr[]={4,4,5,6,7,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int final = peakIndex(arr,n);
    
    cout<<"peak index is  "<< final;
    
    return 0;
}