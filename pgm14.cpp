// Find all the repeating elements

// #include <bits/stdc++.h>

// using namespace std;

//     void repeatElements(int arr[], int n) {
//       int mark[n] = {
//         0
//       };
//       for (int i = 0; i < n; i++) {

//         if (mark[i] == 0) {

//           for (int j = i + 1; j < n; j++) {

//             if (arr[i] == arr[j]) {

//               mark[j] = 1;
//             }
//           }
//         }
//       }

//       for (int i = 0; i < n; i++) {
//         if (mark[i] == 1) {
//           cout << arr[i] <<" ";
//         }
//       }
//     }

// int main() {

//   int arr[] = {1,1,2,3,4,4,5,2} ;
//   int n = 8;

//   repeatElements(arr, n);

//   return 0;
// }
// time complexity : O(n*n)+O(n)


// using hashtable:

// #include <bits/stdc++.h>
// using namespace std ;
// void repeatElements(int arr[], int n) {

//         map<int, int>mp ;

//         for (int i = 0; i < n; i++) {
//             if (mp.find(arr[i]) != mp.end()) {
//                 cout << arr[i] << " ";
               
//             }
//              mp[arr[i]]++;
//         }
//     }
// int main() {

//     int arr[] = {1,1,2,3,4,4,5,2};
//     int n = 8;

//     repeatElements(arr, n) ;

//     return 0 ;
// }


// using maps or hashtable method 2:

// #include<bits/stdc++.h>
// using namespace std;

// void repeatElements(vector<int> &arr,int n){
//     map<int,int>mp;
//     for(int i=0;i<n;i++){
//         mp[arr[i]]++;
//     }
//     for(auto i:mp)
//     if(i.second>1){
//         cout<<i.first;
//     }
// }
// int main() {

//     vector<int> arr = {1,1,2,3,4,4,5,2};
//     int n = 8;

//     repeatElements(arr, n) ;

//     return 0 ;
// }
// Time Complexity: O(N)
// Space Complexity: O(N)


// sorting
// void findRepeatingElements(vector<int>& arr) {
//     sort(arr.begin(),arr.end());
    
//     cout<<"The repeating elements are: ";
//     for(int i=0;i<arr.size()-1;i++) 
//         if(arr[i] == arr[i+1]) cout<<arr[i]<<" ";
// }
// Time Complexity: O(NlogN)+O(N)
// Space Complexity: O(1)


// brute force

// void findRepeatingElements(int arr[],int n) {
	//     int cnt = 0;
	//     int dup[n] ;
	//     for(int i=0;i<n-1;i++) {
	//         for(int j=i+1;j<n;j++) {
	//             if(arr[i]==arr[j]) dup[cnt++] = arr[i];
	//         }
	//     }
	//     cout<<"The repeating elements are: ";
	//     for(int i=0;i<cnt;i++) 
	//         if(dup[i] != dup[i+1]) cout<<dup[i]<<" ";
	// }

    // Time Complexity: O(N2)+O(N)
    // Space Complexity: O(N)