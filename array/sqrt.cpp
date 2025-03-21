#include<iostream>
using namespace std;

long long int sqrtInteger(int n){
    int s = 0;
    int e = n;
    long long int ans = -1;

    while(s<=e){
        
        long long int mid = s + (e - s)/2;
        long long int squre = mid * mid ;
        cout << "s = " << s << ", e = " << e << ", mid = " << mid << ", square = " << squre << endl;


        if(squre == n){
            return mid;
        }
        if(squre < n){
            ans = mid ;
            s = mid  + 1;
        }
        else{
            e = mid - 1;
        }
        
    }
    return ans;
}

double moreprecision(int n, int precision , long long int tempsol){

    double factor = 1;
    double ans = tempsol;

    for(int i = 0; i < precision ; i++){
        factor = factor / 10;
        cout << "Precision level " << i + 1 << ", factor = " << factor << endl;
        for(double j=ans ; j*j < n ; j=j+factor){
            ans = j;
            cout << "  j = " << j << ", j * j = " << j * j << endl;
        }
        cout << "End of precision level " << i + 1 << ", current ans = " << ans << endl;

    }
    return ans;
}

int main(){

    int n;
    cout<<"enter num "<<" ";
    cin>>n;

    long long int tempsol=sqrtInteger(n);
    cout<<tempsol<<endl;
    cout<<"more define"<<moreprecision(n,3,tempsol)<<endl;
    
}