// largest number of an array "using bruteforce -sorting"

#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int> & arr){
    sort(arr.begin(),arr.end());
    return arr[4];
}

int main(){
  vector<int>  arr1 = {2,5,4,6,1};
   vector<int> arr2 = {10,5,6,9,1};

   cout<<"maximum number is: "<< sortArr(arr1)<<endl ;
   cout<<"maximum number is: "<< sortArr(arr2) ;

}
// Time Complexity: O(N*log(N))  Space Complexity: O(n)




// using max variable

// #include <bits/stdc++.h>
 
// using namespace std;
// int findLargestElement(int arr[], int n) {
 
//   int max = arr[0];
//   for (int i = 0; i < n; i++) {
//     if (max < arr[i]) {
//       max = arr[i];
//     }
//   }
//   return max;
// }
// int main() {
//   int arr1[] = {2,5,1,3,0};
//   int n = 5;
//   int max = findLargestElement(arr1, n);
//   cout << "The largest element in the array is: " << max << endl;
 
//   int arr2[] =  {8,10,5,7,9};
//   n = 5;
//   max = findLargestElement(arr2, n);
//   cout << "The largest element in the array is: " << max<<endl;
//   return 0;
// }

// Time Complexity: O(N) Space Complexity: O(1)

// we can also solve by: 
// #include<iostream>
// #include<vector> 
// using namespace std;
// int largest(vector<int>& arr , int n){
//     for(int i=0; i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if( arr[i]>arr[j]){
//             swap(arr[i] , arr[j]);
//         }
//     }
// }
// return arr[n-1];
// }

// int main(){
//     vector<int> arr={9,8,4,7,10,1};
//     int n = arr.size();
//     cout<<"maximum number is: "<<largest(arr,n)<<endl;

// }
