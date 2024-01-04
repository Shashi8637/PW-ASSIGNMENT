#include<bits/stdc++.h>
using namespace std;
//  Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
int main()
{
int arr[7]={1,1,3,3,5,4,4};

int uniqueNum = 0;
int sum =0;

 for(int i=0; i<7; i++){
    uniqueNum ^= arr[i];
    sum += uniqueNum;
 }
 
    cout<<sum;
 
 
 
 
    return 0;
}