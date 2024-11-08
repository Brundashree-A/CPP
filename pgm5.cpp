// using two loops
// count frequency of numbers
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
void countFreq(vector<int> &arr, int n)
{
    vector<bool> visited(n, false);
 
    for (int i = 0; i < n; i++) {
 
        
        if (visited[i] == true)
            continue;
 
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++; 
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
 
int main()
{
    int n;
    cout<<"enter the n value: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array number: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    countFreq(arr, n);
    return 0;
}
// Time Complexity: O(N*N) ,,,, Space Complexity:  O(N)



// using maps methods

// #include<bits/stdc++.h>
// using namespace std;

// void Frequency(vector<int> &arr, int n)
// {
//     unordered_map<int ,int> map;

//     for(int i=0;i<n;i++)
//     map[arr[i]]++;

//     for(auto x: map)
//     cout<<x.first<<" "<<x.second<<endl;

// }
//  int main()
// {
//     vector<int> arr={10,5,10,15,10,5};
//     int n= arr.size();
//     Frequency(arr, n);
//     return 0;
// }  Time Complexity: O(N)  ,,,, Space Complexity: O(n)

