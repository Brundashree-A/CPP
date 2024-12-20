// Check if array is subset of another array

#include<bits/stdc++.h>
using namespace std;

int subset(vector<int> & arr1,vector<int> & arr2,int n,int m){
    unordered_map <int,int> mp;
    bool res;
    for(int i=0;i<m;i++){
        mp[arr2[i]];
    }
    for(int i=0;i<n;i++){
        if(mp.find(arr1[i])==mp.end()){
            cout<<"not a subset";
            res=true;
            break;
        }
    }
    if(res==false){
        cout<<"is a subset";

    }
}
int main(){
    int n ;
    cout<<"enter n: ";;
    cin>>n;
    vector<int> arr1(n);
    cout<<"enter the sub array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"enter m: ";
    cin>>m;
    vector<int> arr2(m);
    cout<<"enter the arr2: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    subset(arr1,arr2,n,m);
}

// time complexity : O(n)

// method -2
// #include <iostream>
// using namespace std;

// bool isSubset(int arr1[], int m, int arr2[], int n){
//     if(m>n) return false;
//     for(int i=0; i<m; i++){
// 	    bool present=false;
// 	    for(int j=0; j<n;j++){
// 	        if(arr2[j]==arr1[i]){
// 	            present = true;
// 	            break;
// 	        }
// 	    }
// 	    if(present==false) return false;
// 	}
// 	return true;
// }


// int main() {
// 	// your code goes here
// 	int arr1[]={1,3,4,5,2};
// 	int arr2[]={2,4,3,1,7,5,15};
	
// 	int m= sizeof(arr1)/sizeof(arr1[0]);
// 	int n= sizeof(arr2)/sizeof(arr2[0]);
	
// 	bool ans= isSubset(arr1,m,arr2,n);
	
// 	if(ans==true)
// 	    cout<<"arr1[] is a subset of arr2[]";
// 	else cout<<"arr1[] is not a subset of arr2[]";
	
// 	return 0;
// }

// time Complexity: O(M*N)
// Space Complexity: O(1)

