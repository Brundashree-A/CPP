// Average of all the elements

#include<bits/stdc++.h>
using namespace std;

int average(vector<int> &arr ,int n){
    float sum = 0;
    float average;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"average is: "<<sum/2<<endl;
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
    average(arr,n);
}

// time Complexity: O(n) As we are traversing the array once.
// Space Complexity: O(1).