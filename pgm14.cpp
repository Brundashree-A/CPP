// Find all the repeating elements

#include <bits/stdc++.h>

using namespace std;

    void repeatElements(int arr[], int n) {
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
        if (mark[i] == 1) {
          cout << arr[i] <<" ";
        }
      }
    }

int main() {

  int arr[] = {1,1,2,3,4,4,5,2} ;
  int n = 8;

  repeatElements(arr, n);

  return 0;
}
