#include<bits/stdc++.h>
using namespace std;


 void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int findDublicate(int arr[],int n){
    int i=0;
    while(i<n){
       int eleIdx = arr[i];
       if(arr[i]==arr[eleIdx]) return arr[i];
      
       else{
        swap(arr[i],arr[eleIdx]);
       }
    }
 
}

int usingBinarySerch(int arr[],int n){
     //  Time complexity - O(logn)
    // sort(nums.begin(),nums.end());
    // int low = 0;
    // int high=nums.size()-1;
    // while(low<=high){
    //     int mid = low +(high-low)/2;
    //      if(nums[mid]==mid || nums[mid]<mid) high = mid-1;
    //      if(nums[mid]>mid) low = mid+1;

    // }
    // return nums[high];

}



int main()
{

int arr[]={1,3,4,4,2};
int n = sizeof(arr)/sizeof(arr[0]);
print(arr,n);
cout<<endl;
cout<<findDublicate(arr,n);
usingBinarySerch(arr,n);
cout<<endl;
print(arr,n);
 
 
    return 0;
}


// Question - 448
// LEETCODE PROBLEM -  find all number disappered in an array
// https://leetcode.com/submissions/detail/1153377633/

// Question - 645
// LEETCODE PROBLEM Set Mismatch
//https://leetcode.com/problems/set-mismatch/description/?envType=daily-question&envId=2024-01-22