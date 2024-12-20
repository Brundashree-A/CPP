// searching an element in an array

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key elements: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
        }
    }
        cout<<"oops sorryyy ><";
        
}

// time complexity : O(n)
// space complexity : O(1)

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n = 6;
// 	int arr[n] = {6, 7, 9, 5, 3, 10};
// 	int k = 10;
// 	int low = 0, high = n - 1;
// 	int ans = -1;
// 	while (low <= high) {
// 		int mid = (low + high) / 2;
// 		if (arr[mid] > k) {
// 			high = mid - 1;
// 		}
// 		else if (arr[mid] < k) {
// 			low = mid + 1;
// 		}
// 		else {
// 			ans = mid;
// 			break;
// 		}
// 	}
// 	cout << "The element is present in "<<ans<<" index";
// }

// Time Complexity: O(logn).

// Space Complexity: O(1)