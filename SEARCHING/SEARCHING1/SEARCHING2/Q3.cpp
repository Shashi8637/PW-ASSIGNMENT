// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target , return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.
// Example 1:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 25;
    bool flag = false;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int low=0;
            int high = 3;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(arr[i][mid]==target){
                    flag=true;
                    break;
                }
                else if(arr[i][mid]>target){
                    high = mid - 1;
                }
                else{
                    low = mid+1;
                }
            }
        }

      
    }

    if(flag==true){
       cout<<"true";
    }else{
        cout<<"false";
    }
      return 0;
}