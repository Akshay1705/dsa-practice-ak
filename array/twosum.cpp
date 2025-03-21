#include<iostream>
#include<vector>
using namespace std;

void print(const vector<int> &ans){
    int n=ans.size();//(size_t i = 0; i < ans.size(); i++) in for loop
    for(int k=0; k < n;k++){// error occures bcoz k in singed but ans.size() is unsinged
        cout<< ans[k] <<" ";
    }
}

vector<int> reverse(vector<int> v){

    int s=0;
    int e=v.size()-1;

    while(s<e){
        swap(v[s++],v[e--]);
    }

    return v;

    }

vector<int>twosum(vector<int> &a,int n,vector<int> &b,int m){
    int i=n-1,j=m-1;
    vector<int>ans;
    int carry=0;

    //start case basic
    while(i>=0 && j>=0){
        
        int sum = a[i--] + b[j--] + carry;
        
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }

    //first case
    while(i>=0){

        int sum=a[i--]+carry;

        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }

    //second case
    while(j>=0){

        int sum=b[j--]+carry;
        
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }

    //last carry bache to
     while(carry!=0){

        int sum=carry;

        carry=carry/10;
        sum=carry%10;
        ans.push_back(sum);
    }
    ans = reverse(ans);
    print(ans);
    return ans ;

}

int main(){

    vector<int> arr1={4,3,5,6};
    //cout<<"value 1 is :" << print(arr1)<<endl; ????
    print(arr1);
    cout<<endl;
    vector<int> arr2={6,2,4,8};
    //cout<<"value 2 is :" << print(arr2)<<endl; ????
    print(arr2);
    cout<<endl;
    
    vector<int> final= twosum(arr1,arr1.size(),arr2,arr2.size());

    //cout<<"aya k";

    //print(final);

    return 0;
}