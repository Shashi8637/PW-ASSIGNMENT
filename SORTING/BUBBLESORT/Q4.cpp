#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Sort the array in descending order using Bubble Sort.

int arr[] = {1,14,67,23,9,65};
int n = sizeof(arr)/sizeof(arr[0]);

for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i; j++){
        if(arr[j]<arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}



 
 
 
    return 0;
}