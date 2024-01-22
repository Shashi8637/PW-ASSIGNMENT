#include<bits/stdc++.h>
using namespace std;

void cycleSort(int arr[],int n){
    int i=0;
    while(i<=n){
        int eleIdx = arr[i]-1;
        if(eleIdx==i) i++;
        else{
            swap(arr[i],arr[eleIdx]);
        }
    }
}


void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
 
int main()
{
int arr[]={1,6,4,2,3,5,7};
int n = sizeof(arr)/sizeof(arr[0]);
print(arr,n);
cycleSort(arr,n-1);
print(arr,n);

 
 
 
    return 0;
}