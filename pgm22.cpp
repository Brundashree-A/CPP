// searching an element in an array

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key elements: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
        }
    }
        cout<<"oops sorryyy ><";
        
}

// time complexity : O(n)
// space complexity : O(1)
