// replace element by its rank in the array

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 6;
	int arr[n] = {20, 15, 26, 2, 98, 6};
	for (int i = 0; i < n; i++) {
		set<int>s;
		for (int j = 0; j < n; j++) {
			if (arr[j] < arr[i]) {
				s.insert(arr[j]);
			}
		}
		cout << s.size() + 1 << " ";
	}
}
// Time Complexity: O(N*N) as we are using double for loop.
// Space Complexity: O(N) as we are using set.


// optimal method

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n=6;
// 	int arr[n]={20,15,26,98,2,6};
// 	map<int,int>mp;
// 	int temp =1;
// 	int brr[n];
// 	for(int i=0;i<n;i++){
// 		brr[i]=arr[i];
// 	}
// 	sort(brr,brr+n);
// 	for(int i=0;i<n;i++){
// 		if(mp[brr[i]]==0){
// 			mp[brr[i]] = temp;
// 			temp++;
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<mp[arr[i]];
// 	}
// }

// Time Complexity:O(n)+O(nlogn)+O(n). O(n) for copying the elements from the original to the dummy array, O(nlogn) for sorting the dummy array, and O(n) for printing the ranks.
// Space Complexity:O(N+N), for using dummy array and hashmap.
