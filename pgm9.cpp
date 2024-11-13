// median in an array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

float median(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    float m;
    if(n%2!=0){
    m = arr[n/2];
    }
    else {
    m = (arr[(n/2)-1] + arr[n/2])/2.0;
    }
    return m;
}

int main(){
    int n;
    cout<<"enter the size: ";
    cin>> n;
    vector<int> arr(n);
    cout<<"enter the array elements: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<< median(arr,n);
}