//find max and min value in array
#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n) {

    int mini = INT_MAX;
    
    for(int i = 0; i<n; i++) {
        
        mini = min( mini, num[i]);
        
        //if(num[i] < min){
        //    min = num[i];
        //}
    }

    //returning min value
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        maxi = max(maxi, num[i]);

       // if(num[i] > max){
         //   max = num[i];
       // }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cout<<"enter size:";
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cout<<"now enter element-";
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}
//enter size:5
//now enter element-2
//now enter element-5
//now enter element-4
//now enter element-8
//now enter element--3
 //Maximum value is 8
 //Minimum value is -3