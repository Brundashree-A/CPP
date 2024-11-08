// Rearrange array in increasing-decreasing order

#include<bits/stdc++.h>
using namespace std;

int indeorder(vector<int> &arr , int n){
    for (int i=0;i<n;i++){
        sort(arr.begin(),arr.end());
    }
    cout<<"array after sorting in increasing - decreasing order :";
    for(int i=0;i<n/2;i++){
    cout<<arr[i];
    }
    for(int i=n-1;i>=n/2;i--){
        cout<<arr[i];
    }
}

int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<indeorder(arr,n);

}

// Time Complexity: O(nlogn) +O(n).O(nlogn) for sorting the array and O(n) for printing the elements. 

// Space Complexity: O(1).

