// sort the elements of an array by frequency
#include <bits/stdc++.h>
using namespace std;
int sortarray2d(int arr2d[2][100] , int k){
    for(int i=0; i<k-1 ;i++){
        for(int j=0;j<k-1-i;j++){
            if(arr2d[1][j]<arr2d[1][j+1]){
                swap(arr2d[1][j] , arr2d[1][j+1]);
                swap(arr2d[0][j] , arr2d[0][j+1]);

            }

        }
    }
}
void Sortele(int arr[], int n){
    sort(arr, arr+n);
    int arr2d[2][100];
    int k=0;
    int count =0;
    for(int i=0;i<n;i++){
        if(i==0){
            arr2d[0][k]=arr[i];
            count =1;
        }
        else if(arr[i] == arr[i-1]){
            count++;
        }
        else{
            arr2d[1][k] = count;
            count = 1;
            k++;
            arr2d[0][k] = arr[i];
        }
    }
    arr2d[1][k]= count;
    k++;

    sortarray2d(arr2d,k);

    k=0;
    int i=0;
    while(i<n){
        while(arr2d[1][k]>0){
            arr[i]=arr2d[0][k];
            i++;
            arr2d[1][k]--;
        }
        k++;
    }
}
 
int main()
{
  int n = 8;
  int arr[] = {1, 2, 3, 2, 4, 3, 1, 2};
  Sortele(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(n) 


// optimal solution


// #include <bits/stdc++.h>
// using namespace std;
// bool sortele(pair<int, int> a, pair<int, int> b)
// {
//   if (a.second == b.second)
//     return a.first < b.first;
//   return a.second > b.second;
// }
// void Sortelementsbyfreq(int arr[], int n)
// {
//   unordered_map<int,int>mp;
//   for(int i=0;i<n;i++){
//     mp[arr[i]]++;
//   }
//   vector<pair<int,int>>vec;
//   for(auto it=mp.begin(); it != mp.end();it++)
//   {
//     vec.push_back({it->first,it->second});
//   }
//   sort(vec.begin(),vec.end(),sortele);
//   for(int i=0;i<vec.size();i++){
//     while(vec[i].second>0){
//         cout<<vec[i].first<<" ";
//         vec[i].second--;
//     }
//   }
//   cout<<endl;


// }
// int main()
// {
//   int arr[] = {3, 3, 5, 2, 1, 1, 2};
//   int n = 7;
//   Sortelementsbyfreq(arr, n);
//   return 0;
// }

// time complexity - O(n)
// space complexity -O(n)