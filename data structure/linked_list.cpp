#include<bits/stdc++.h>
using namespace std;

class Node//struct not give us insertion or that kind og task so we use class for oops for inderstrice
{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = NULL;
    }

};

int main(){
    vector<int> arr = {2,3,5,7,9};

    Node* headnode = new Node(arr[0],NULL);
    cout << headnode <<endl;//print that head's memory address = 0x1087f38

    cout << headnode -> data <<endl;//print head's data = 2
    cout << headnode -> next <<endl;//print head's next memory adderess = 0

    // Node x = Node(arr[0],nullptr);//this is just a varaible/object
    // Node*y = &x;//by this you can accsec the address
    // cout << y;  //by this method is not preferd janroly 
    // cout << x.data;
    // cout << x.next;

}
