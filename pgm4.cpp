// using brunda method


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {15,24,13,2,1};
    int n= arr.size();
    cout<<"the given array is: "<<endl;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i];
    }
    cout<<endl;

    cout<<"the reverse array is: "<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i];
    }
}


// by taking inputs from user:  

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int brundasmethod(vector<int> &arr,int n){
//     cout<<"the reverse array is: ";
//     for(int i=n-1;i>=0;i--){
//     cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0 ;

// }

// int main() {
//     int n ;
//     cout<<"enter n:";
//     cin>>n;
//     vector<int> arr(n); 
//     cout<<"enter array elements: ";
//     for(int i=0;i<n;i++)
//     {
//     cin>>arr[i];
//     }
//     cout<<brundasmethod(arr,n)<<endl;
// }


// using space optimized method




// recursive method

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int reversearray(vector<int> &arr, int start , int end,int n)
// {
//     if(start<end){
//         swap(arr[start],arr[end]);
//         reversearray(arr, start+1,end-1,n);
        
//     }
//     cout<<"reverse array is:";
//     for(int i=0;i<=n-1 ;i++){
//         cout<<arr[i];
//     }

// }

// int main() {
//     int n ;
//     cout<<"enter n:";
//     cin>>n;
//     vector<int> arr(n); 
//     cout<<"enter array elements: ";
//     for(int i=0;i<n;i++)
//     {
//     cin>>arr[i];
//     }
//    cout<<reversearray(arr,0,n-1,n);
// }

// // Using library function (New Approach)

// #include <iostream>
// #include<algorithm>

// using namespace std;
// //Function to print array
// void printArray(int arr[], int n) {
//    cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << arr[i] << " ";
//    }
// }
// //Reverse array using library function
// void reverseArray(int arr[], int n) {
//    //Reversing elements from index 0 to n-1 
//    reverse(arr, arr + n);
// }
// int main() {
//    int n = 5;
//    int arr[] = { 5, 4, 3, 2, 1 };
//    reverseArray(arr, n);
//    printArray(arr, n);
//    return 0;
// }