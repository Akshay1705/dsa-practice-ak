#include <iostream>
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
    if(s == e){
      //cout<<" e n d "<<e<<"   star t  "<<s<<endl;
    }
    Iteration++;
  }
  return s;
}

int main() 
{
    int arr[] = {3,10,17,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int final = getpivot(arr,n);
    
    cout<<"pivot is  "<<final<<endl;
    
    int check=(3+4)/2;
    cout<<check;
}