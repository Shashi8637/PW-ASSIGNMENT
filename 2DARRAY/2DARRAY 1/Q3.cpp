#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 int arr[4][4]={{1,2,-3,4},{0,0,-4,2},{1,-1,2,3},{-4,-5,-7,0}};
 int l1=1, l2=3, r1=2, r2=3;

int sum =0;
 for(int i=l1; i<=l2; i++){
    for(int j=r1; j<=r2; j++){
        sum += arr[i][j];
    }

 }

 cout<<sum;

 
 
 
    return 0;
}