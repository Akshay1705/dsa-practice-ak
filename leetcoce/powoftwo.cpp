//check given number is power of two 
#include<iostream>
#include <climits>
using namespace std;
    bool isPowerOfTwo(int n) {
        
        int ans = 1;
        
        for(int i = 0; i <= 30; i++) {
            
            cout<<" ans "<<ans <<endl;
            if(ans == n)
            {
                return 1;
            }
            if(ans < INT_MAX/2)
            if(ans>n)return false;
            ans = ans * 2;   
            
        }
        return 0;
    }

int main(){
    int n;
    cin >> n;

    int pow=isPowerOfTwo(n);
    cout<<pow;


    return 0;

}