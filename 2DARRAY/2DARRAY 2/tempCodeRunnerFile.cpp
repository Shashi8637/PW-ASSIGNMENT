#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Write a program to rotate the matrix by 90 degrees anti-clockwise.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 3 6 9
// 2 5 8
// 1 4 7
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for(int i=0; i<3; i++){
    for(int j=i+1; j<3; j++){
        int temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
    }
}
