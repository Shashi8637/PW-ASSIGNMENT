#include<bits/stdc++.h>
using namespace std;

int findEle(int arr[],int idx,int n,int target){
    if(idx==n){
        return -1;
    }

    if(target==arr[idx]){
        return idx;
    }

    findEle(arr,idx+1,n,target);

}
 



int main()
{
    // Print index of a given element in an array. If not present, print -1.
    int arr[]={1,2,3,4,5,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target=10;
    cout<<findEle(arr,0,n,target);

 
 
 
    return 0;
}