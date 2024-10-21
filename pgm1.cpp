// minimum number of an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j;
    vector<int> a={2,5,3,1,0};
    int n = a.size();
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            swap(a[i],a[j]);
            }
        }
        
    }
      cout<<"sorted array: "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<"minimum number is: "<<a[0]<<endl;
    
   
}



 