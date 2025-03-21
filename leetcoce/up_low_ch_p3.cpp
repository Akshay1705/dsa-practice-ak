#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter alphabet";
cin>>ch;

if(ch>='a' && ch<='z'){
    cout<<ch<<"  is lowercase charecter ";
}
else if(ch>='A' && ch<='Z'){
    cout<<ch<<"  is uppercasa charecter";
}
else {
    cout<<ch<<" is digit or spcial charecter";
}


return 0;
}