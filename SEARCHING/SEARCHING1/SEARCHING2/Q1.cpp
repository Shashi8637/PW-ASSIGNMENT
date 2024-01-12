#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Write a program to apply binary search in array sorted in decreasing order.
int arr[]={9,8,7,6,5,4,3,2,1};
int n = sizeof(arr)/sizeof(arr[0]);
int low = 0;
int high = n-1;
int target = 1;
bool flag = false;
int idx = -1;
while(low<=high){
    int mid = low+(high-low)/2;
    if(arr[mid]==target){
        flag = true;
        idx = mid;
        break;
    }
    if(arr[mid]>target){
        low = mid+1; 
    }else{
        high = mid-1;
    }

}

if(flag==true){
 cout<<"yes present at Idx"<<" "<<idx;
}else{
    cout<<"no their is no element";
}
 
 
 
    return 0;
}