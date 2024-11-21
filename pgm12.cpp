// remove duplicates using unsorted array
// ❤️💕 using maps or hashtable method 
#include <bits/stdc++.h>

using namespace std;

    void duplicate(int arr[], int n) {
      int mark[n] = {
        0
      };
      for (int i = 0; i < n; i++) {

        if (mark[i] == 0) {

          for (int j = i + 1; j < n; j++) {

            if (arr[i] == arr[j]) {

              mark[j] = 1;
            }
          }
        }
      }

      for (int i = 0; i < n; i++) {
        if (mark[i] == 0) {
          cout << arr[i] <<" ";
        }
      }
    }

int main() {

  int arr[] = {4, 3, 9, 2, 4, 1, 10, 89, 34} ;
  int n = 9;

  duplicate(arr, n);

  return 0;
}

// Time complexity :  O(n*n) + O(n) 

// -> O(n*n) for updating boolean array

// -> O(n) for the printing of non-duplicates

// Space complexity: O(n) + O(n) 

// -> O(n) marking array 

// -> O(n) answer array


// hashtable method

// #include <bits/stdc++.h>
// using namespace std ;



//     void duplicate(int arr[], int n) {

//         map<int, int>mp ;

//         for (int i = 0; i < n; i++) {
//             if (mp.find(arr[i]) == mp.end()) {
//                 cout << arr[i] << " ";
//                 mp[arr[i]]++;
//             }
//         }
//     }


// int main() {

//     int arr[] = {4, 3, 9, 2, 4, 1, 10, 89, 34} ;
//     int n = 9  ;

//     duplicate(arr, n) ;

//     return 0 ;
// }