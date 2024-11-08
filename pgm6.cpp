// Calculate Sum of the Elements of the Array
// normal method

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sumofelements(vector<int> &arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
	

return sum;
}

int main(){
    int n;
    cout<<"enter the n value:";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"SUM: "<<sumofelements(arr,n);
}

// // using two loops
// // #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n = 5;
// 	vector<int>arr = {1, 2, 3, 4, 5};
// 	int sum = 0;
// 	for (int i = 0; i < n; i++) {
// 		sum += (double)arr[i];
// 	}
// 	cout <<"The sum of the elements of the array is "<< sum;
// }

// Time Complexity: O(n) As we traverse the array once.
// Space Complexity: O(1).


//  Using STL in C++
// For C++: “accumulate” is used to calculate the sum of all the elements in the array.    

// #include<bits/stdc++.h>
// using namespace std;
// int main() {

// 	int n = 5;
// 	int arr[] = {1, 2, 3, 4, 5};
// 	int initialSum = 0;
// 	cout <<"The sum of the elements of the array is ";
// 	cout<<accumulate(arr, arr + n, initialSum);

// }
// Output:

// The sum of the elements of the array is 15

// Time Complexity: O(n).

// Space Complexity: O(1).

// using STL functions in Vector
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int sumofelements(vector<int> &arr, int n){
//     int sum = 0;
// 	cout <<"The sum of the elements of the array is ";
// 	cout<<accumulate(arr.begin(), arr.end(), sum);
// }

// int main(){
//     int n;
//     cout<<"enter the n value:";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"enter the array elements:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"SUM: "<<sumofelements(arr,n);
// }

