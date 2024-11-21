// adding an element in array

#include<bits/stdc++.h>
using namespace std;

void at_begin(vector<int> & a,int n,int value1){
    int b[n+1];
    for(int i=0;i<n;i++){
        b[i+1]=a[i];
        b[0]=value1;
    }
    cout<<"array after inserting at beginning: ";
    for(int i=0;i<=n;i++){
        cout<<b[i];
    }
    cout<<endl;
}


void at_end(vector<int> & a,int n,int value2){
    int b[n+1];
    for(int i=0;i<n;i++){
        b[i]=a[i];
        b[n]=value2;
    }
    cout<<"array after inserting at the end: ";
    for(int i=0;i<=n;i++){
        cout<<b[i];
    }
    cout<<endl;
}

void at_pos(vector<int> & a,int n,int value3,int key){
    int b[n+1];
    b[key] = value3;

   for(int i=0;i<n;i++){
    if(i < key){
            b[i] = a[i];
        }
        else{

            b[i+1] = a[i];
        }
    }
     cout<<"array after inserting at given position: ";
    for(int i=0;i<=n;i++){
        cout<<b[i];
    }
}




int main() {

  vector<int> a = {2, 4, 1, 3} ;
  int n = a.size();
  int value1 = 7;
  int value2 = 6;
  int value3 = 9;
  int key = 2;


  at_begin(a, n,value1);
  at_end(a,n,value2);
  at_pos(a,n,value3,key);

  return 0;
}
// time complexity O(n)



// Insertion at beginning 

// #include <bits/stdc++.h>
// using namespace std;
// void insertatbegin(int* arr,int n,int value)
// {
//     for(int i=n-1;i>=0;i--)
//     {
//         arr[i+1]=arr[i];
//     }
//     arr[0]=value;
// }
// int main()
// {
//     int n=8;
//     int arr[9]={10,9,14,8,20,48,16,9};
//     int value=40;
//     cout<<"Before inserting the value at beginning:"<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     insertatbegin(arr,n,value);
//     cout<<"After inserting the value at beginning:"<<endl;
//     for(int i=0;i<=n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// Time Complexity: θ(n), since n iterations are required to shift the array element to right by 1 position
// Space Complexity: O(1)




// Insertion at Ending

// #include <bits/stdc++.h>
// using namespace std;
// void insertatEnd(int *arr, int n, int value)
// {
//     arr[n] = value;
// }

// int main()
// {
//     int n=8;
//     int arr[9]={10,9,14,8,20,48,16,9};
//     int value=40;
//     cout<<"Before inserting the value at beginning:"<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     insertatEnd(arr,n,value);
//     cout<<"After inserting the value at beginning:"<<endl;
//     for(int i=0;i<=n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// Time Complexity: θ(n), since n iterations are required to shift θ(1) since we need to directly add an element at the end of the array
// Space Complexity: O(1)




// Insertion at specific position

// #include <bits/stdc++.h>
// using namespace std;
// void insertatposition(int *arr, int n, int value, int pos)
// {
//     for (int i = n; i >= pos; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[pos - 1] = value;
// }

// int main()
// {
//     int n=8;
//     int pos = 5;
//     int arr[9]={10,9,14,8,20,48,16,9};
//     int value=40;
//     cout<<"Before inserting the value at beginning:"<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     insertatposition(arr,n,value,pos);
//     cout<<"After inserting the value at beginning:"<<endl;
//     for(int i=0;i<=n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Time Complexity: O(n) since we need to shift the elements to right according to the position.
// Space Complexity: O(1)