#include <bits/stdc++.h>
using namespace std;

int sumArr(vector<int> &arr, int n){
    vector<int>temp(n-1);
    if(n==0){
        return 0;
    }
    for(int i=0; i<n; i++){
        if(i!=0){
            temp[i-1]=arr[i-1]+arr[i];
        }
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    sumArr(temp,n-1);

}


int main()
{
    // Given an array of integers, print a sum triangle using recursion from it such that the first level has
    // all array elements. After that, at each level the number of elements is one less than the previous
    // level and elements at the level will be the sum of consecutive two elements in the previous level.
    // So, if sample input is [5, 4, 3, 2, 1], sample output will be:
    // [5, 4, 3, 2, 1]
    // [9, 7, 5, 3]
    // [16, 12, 8]
    // [28, 20]
    // [48]
   vector<int>arr(5);
   for(int i=0; i<5; i++){
    cin>>arr[i];
   }
   int n = arr.size();
   cout<<sumArr(arr,n);

    

    return 0;
}