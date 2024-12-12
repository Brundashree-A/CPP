// rotate the array elements towards left or right
// method towards left
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int rotatearray(vector<int> &arr,int n,int key){
    for(int i=0;i<n;i++){
        if(i>=key){
            cout<<arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(i<key){
            cout<<arr[i];
        }
    }
}
int main() {
    int key = 3;
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    rotatearray(arr,n,key);
    return 0;
}

// method towards right
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int rotatearray(vector<int> &arr,int n,int key){
//     for(int i=0;i<n;i++){
//         if(i>=n-key){
//             cout<<arr[i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(i<n-key){
//             cout<<arr[i];
//         }
//     }
// }
// int main() {
//     int key = 2;
//     vector<int> arr = {1,2,3,4,5,6};
//     int n = arr.size();
//     rotatearray(arr,n,key);
//     return 0;
// }

// time complexity is : O(n)
// space complexity is ; O(n)