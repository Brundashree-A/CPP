// Remove Duplicates in-place from Sorted Array
#include<bits/stdc++.h>
using namespace std;

int duplicate(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
              i++;
              arr[i]==arr[j];
            }
            else{
                cout<<arr[j];
            }
        }

    }
    
}

int main(){
    int n;
    cout<<"enter the n value: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicate(arr,n);
}