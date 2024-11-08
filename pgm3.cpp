// second smallest and second largest numbers
// Best solution

#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
   int small = INT_MAX;
   int second_small = INT_MAX;
   int i;
   for(i=0;i<n;i++){
    if(arr[i]<small){
        second_small=small;
        small = arr[i];
    }
    else if(arr[i]<second_small && arr[i]!=small)
    {
        second_small=arr[i]; 
    }
    }
   return second_small;
}

int secondLargest(int arr[],int n){
    if(n<2)
    return -1;
    int large = INT_MIN;
    int second_large =INT_MIN;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>large){
            second_large= large;
            large = arr[i];
        }
        else if(arr[i]>second_large && arr[i]!=large){
            second_large=arr[i];
        }
    }
    return second_large;
}



int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}

// normal method


// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int secondlargest_num(vector<int>&arr , int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
    
//     return arr[n-2];
// }
// int secondsmallest_num(vector<int>&arr , int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
    
//     return arr[1];
// }
// int main(){
//    int n;
//    cout<<"enter n: ";
//    cin>>n;
//   vector<int> arr(n);
//    cout<<"enter array: ";
//    for(int i=0;i<n;i++){
//    cin>>arr[i];
//    }
//    cout<<"second largest num is: "<<secondlargest_num(arr,n)<<endl;
//    cout<<"second smallest num is: "<<secondsmallest_num(arr,n)<<endl;


// }


// using brute force method 

// #include<bits/stdc++.h>
// using namespace std;

// int secondlargest_num (vector<int>&arr ,int n){
//     sort(arr.begin(),arr.end());
//     return arr[n-2];
// }

// int secondsmallest_num (vector<int>&arr ,int n){
//     sort(arr.begin(),arr.end());
//     return arr[1];
// }


// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"enter the array elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"secondlargest_num: "<<secondlargest_num(arr,n)<<endl;
//     cout<<"secondsmallest_num: "<<secondsmallest_num(arr,n)<<endl;

// }


// better approach

// #include<bits/stdc++.h>
// using namespace std;
// void getElements(int arr[],int n)
// {
//     if(n==0 || n==1)
//         cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
//     int small = INT_MAX, second_small = INT_MAX;
//     int large = INT_MIN, second_large = INT_MIN;
//     int i; 
//     for(i=0;i<n;i++) {
//         small = min(small,arr[i]);
//         large = max(large,arr[i]);
//     }   
//     for(i=0;i<n;i++){
//         if(arr[i]<second_small && arr[i]!= small)
//         second_small = arr[i];
//         if(arr[i]>second_large && arr[i]!= large)
//         second_large = arr[i];
//     }
 
//     cout<<"Second smallest is "<<second_small<<endl;
//     cout<<"Second largest is "<<second_large<<endl;
// }
// int main()
// {
//     int arr[]={1,2,4,6,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     getElements(arr,n);
//     return 0;
// }


