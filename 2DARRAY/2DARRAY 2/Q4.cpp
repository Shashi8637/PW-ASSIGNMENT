#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
// Input 1: n = 3
// Output 1: [[1,2,3],[8,9,4],[7,6,5]]
// Input 2: n = 1
// Output 2: [[1]]

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int minr = 0;
int maxr = 2;
int minc = 0;
int maxc = 2;

while(minr<=maxr && maxc<=maxc){
    // right 
    for(int j=minc; j<=maxc; j++){
        cout<<arr[minr][j]<<" ";
    }
    minr++;
    //down
    for(int i=minr; i<=maxr; i++){
        cout<<arr[i][maxc]<<" ";
    }
    maxc--;

    //left
    for(int j=maxc; j>=minc; j--){
        cout<<arr[maxr][j]<<" ";
    }
    maxr--;
    
    //up
    for(int i=maxr; i>=minr; i--){
        cout<<arr[i][minc]<<" ";
    }
    minc++;
}
 
 
 
    return 0;
}