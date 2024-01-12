#include<bits/stdc++.h>
using namespace std;
 
int main()
{
     // Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2

int arr[6]={1,2,3,4,4,5};
int low = 0;
int high = 5;
while(low<=high){
    int mid = low + (high-low)/2;
    int count = 0;
    for(int i=0; i<6; i++){
        if(arr[i]<=mid){
            count++;
        }
    }
    if(count<=mid){
        low = mid+1;
    }else{
        high = mid-1;
    }
    }
    cout<<low;


 
 
 
    return 0;
}

