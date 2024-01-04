#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
int arr[5]={1,2,3,4,5};
for(int i=0; i<5; i++){
    if(i%2==0){
        arr[i] *= 2;
    }
    else arr[i]+=10;
}
for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}
 
 
 
    return 0;
}