// largest number of an array

// #include<bits/stdc++.h>
// using namespace std;

// int sortArr(vector<int> & arr){
//     sort(arr.begin(),arr.end());
//     return arr[4];
// }

// int main(){
//   vector<int>  arr1 = {2,5,4,6,1};
//    vector<int> arr2 = {10,5,6,9,1};

//    cout<<"maximum number is: "<< sortArr(arr1)<<endl ;
//    cout<<"maximum number is: "<< sortArr(arr2) ;

// }

#include<iostream>
#include<vector> 
using namespace std;
int largest(vector<int>& arr , int n){
    for(int i=0; i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if( arr[i]>arr[j]){
            swap(arr[i] , arr[j]);
        }
    }
}
return arr[n-1];
}

int main(){
    vector<int> arr={9,8,4,7,10,1};
    int n = arr.size();
    cout<<"maximum number is: "<<largest(arr,n)<<endl;

}