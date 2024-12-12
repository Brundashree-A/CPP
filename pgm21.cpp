// equilibrium index in an array
// optimal solution

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int equilibrium(vector<int> &arr,int n){
    int totalsum =0;
    for(int i=0;i<n;i++){
        totalsum += arr[i];
    }

    int leftsum = 0, rightsum = totalsum;
    for(int i=0;i<n;i++){
        rightsum -= arr[i];
    if(leftsum == rightsum){
        cout<< i;
    }
    leftsum += arr[i];
    }


}
int main() {
    vector<int> arr = {2,3,-1,8,4};
    int n = arr.size();
    equilibrium(arr,n);
    return 0;
}
// timecomplexity = O(n)
// spacecomplexity = O(1)



// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int equilibrium(vector<int> &arr,int n){
//    for(int i=0;i<n;i++){
//     int rightsum = 0;
//     for(int j =i+1;j<n;j++){
//         rightsum = rightsum+arr[j];
//     }
//     int leftsum = 0;
//     for(int j=i-1;j>=0;j--){
//         leftsum = leftsum + arr[j];
//     }
//     if(leftsum == rightsum){
//         cout<<i;
//     }
//    }
// }
// int main() {
//     vector<int> arr = {2,3,-1,8,4};
//     int n = arr.size();
//     equilibrium(arr,n);
//     return 0;
// }

// timecomplexity : O(n^2)
// spacecomplexity : O(1)

