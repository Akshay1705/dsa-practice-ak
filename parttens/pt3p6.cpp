#include<iostream>
using namespace std;

int main(){

int n;
cout <<"enter num : ";
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<n-j+1;
        /* if ( n )........123/123/123
           if (n>>i)........ 1  /12 /123
           if (n-j+1) ....321/321/321
        */
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

return 0;

}