// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
// int arr[8]={1,2,3,5,6,7,8,9};

// int low = 0;
// int high = 7;
// int target = 6;


// while(low<=high){
//     int mid = low+(high-low)/2;
//     if(arr[mid]==target){
//         cout<<mid;
//         break;
//     }
//     else if(arr[mid]>target){
//         high = mid - 1;
//     }
// else{
//     low = mid + 1;
// }
 
// }
 
 
 
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
// does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6
int arr[] = {1,2,3,3,4,4,4,5};
int x = 4;
int n = sizeof(arr)/sizeof(arr[0]);
int low = 0;
int high = n-1;
while(low<=high){
    int mid = low + (high-low)/2;
    int storeIdx = -1;
    if(arr[mid]==x){
        while(arr[mid]==x){
            storeIdx = mid;
            mid ++;
        }
        cout<<storeIdx;
        break;
    }
    else if(arr[mid]<x) low = mid + 1;
    else high = mid - 1;
}

 
 
    return 0;
}