// Product of subarray
// Brute-force method
#include <bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums){
    int result = INT_MIN;
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            int prod =1;
            for(int k=i;k<=j;k++)
                prod *= nums[k];
                result = max(result,prod);
        }

    }
    return result;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}

// Time Complexity: O(N3)
// Space Complexity: O(1)


// Better approach

// #include<bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int>& nums) {
//     int result = nums[0];
//     for(int i=0;i<nums.size()-1;i++) {
//         int p = nums[i];
//         for(int j=i+1;j<nums.size();j++) {
//            result = max(result,p);
//            p *= nums[j];
//         }
//         result = max(result,p);//manages (n-1)th term 
//     }
//     return result;
// }

// int main() {
//     vector<int> nums = {10,2,3,0,-4,-8,3};
//     cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
//     return 0;
// }

// Time Complexity: O(N2)
// Space Complexity: O(1)


// optimal solution -1

// #include <bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int> &arr) {
//     int n = arr.size(); //size of array.

//     int pre = 1, suff = 1;
//     int ans = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (pre == 0) pre = 1;
//         if (suff == 0) suff = 1;
//         pre *= arr[i];
//         suff *= arr[n - i - 1];
//         ans = max(ans, max(pre, suff));
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {1, 2, -3, 0, -4, -5};
//     cout << "The maximum product subarray is: "
//          << maxProductSubArray(arr) << "\n";
//     return 0;
// }

// Time Complexity: O(N)
// Space Complexity: O(1)


// // optimal solution -2

// #include <bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int> &arr) {
//     int prod1= arr[0] ,prod2 = arr[0], res = arr[0];
//     for(int i=1;i<arr.size();i++){
//          int temp = max({arr[i],prod1*arr[i],prod2*arr[i]});
//          prod2 = min({arr[i],prod1*arr[i],prod2*arr[i]});
//          prod1 = temp;


//          res = max(res , prod1);

//     }
//     return res;
// }
// int main()
// {
//     vector<int> arr = {1, 2, -3, 0, -4, -5};
//     cout << "The maximum product subarray is: " << maxProductSubArray(arr);
//     return 0;
// }

// Time Complexity: O(N)
// Space Complexity: O(1)