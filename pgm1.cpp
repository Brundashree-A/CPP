// minimum number of an array
// we can slove using:
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j;
    vector<int> a={2,5,3,1,0};
    int n = a.size();
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            swap(a[i],a[j]);
            }
        }
        
    }
      cout<<"sorted array: "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<"minimum number is: "<<a[0]<<endl;
    
   
}

// "using sorting method"
// #include<bits/stdc++.h>
// using namespace std;
 
// int sortArr(vector<int>& arr) {
//     sort(arr.begin(),arr.end());
//     return arr[0];
// }
 
// int main() {
//     vector<int> arr1 = {2,5,1,3,0};
//     vector<int> arr2 = {8,10,5,7,9};
   
//     cout<<"The smallest element in the array is: "<<sortArr(arr1)<<endl;
//     cout<<"The smallest element in the array is: "<<sortArr(arr2);
   
//     return 0;
// }
 ////Time Complexity: O(N*log(N)) Space Complexity: O(1)\\\\\
 
// "using min variable"
//  #include <iostream>
// #include <bits/stdc++.h>
 
// using namespace std;
// int SmallestElement(int arr[], int n) {
 
//   int min = arr[0];
//   for (int i = 0; i < n; i++) {
//     if (min > arr[i]) {
//       min = arr[i];
//     }
//   }
//   return min;
// }
// int main() {
//   int arr1[] = {2,5,1,3,0};
//   int n = 5;
//   int min = SmallestElement(arr1, n);
//   cout << "The smallest element in the array is: " << min << endl;
 
//   int arr2[] =  {8,10,5,7,9};
//   n = 5;
//   min = SmallestElement(arr2, n);
//   cout << "The smallest element in the array is: " << min;
//   return 0;
// }

////Time Complexity: O(N) Space Complexity: O(1) \\\\\