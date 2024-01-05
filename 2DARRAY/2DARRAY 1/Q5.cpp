//Write a program to print the row number having the maximum sum in a given matrix.

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int maxSum = 0;
int row = 0;

int arr[3][4]={{1,3,5,7},{3,4,7,8},{1,4,12,3}};


for(int i=0; i<3; i++){
    int sum = 0;
    for(int j=0; j<4; j++){
        sum += arr[i][j];
     }
     if(maxSum<sum) {
        maxSum = sum;
        row = i;
    }
    
}
 cout<<maxSum<<endl;
 cout<<row;
 
 
    return 0;
}