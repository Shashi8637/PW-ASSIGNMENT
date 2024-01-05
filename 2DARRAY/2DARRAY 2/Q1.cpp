#include<bits/stdc++.h>
using namespace std;

// Write a program to print the elements of both the diagonals in a square matrix.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9

// Output 1:
// 1 3
//  5
// 7 9
 
int main()
{
 int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(i==j || (i%2==0 && j%2==0)){
            cout<<arr[i][j]<<" ";
        }
        else{
            cout<<"*"<<" ";
        }
    }
    cout<<endl;
 }
 
 
 
    return 0;
}