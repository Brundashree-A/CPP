// Non-repeating numbers
// using hashtable

#include<bits/stdc++.h>
using namespace std;

void nonRepeatelem(vector<int> &arr ,int n){
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto i:mp)
    if(i.second == 1){
        cout<<i.first;
    }
}

int main() {

    vector<int> arr = {1,2,-1,1,3,1};
    int n = 6;

    nonRepeatelem(arr, n) ;

    return 0 ;
}

// time complexity - O(n)
// space compleixty -O(n)

