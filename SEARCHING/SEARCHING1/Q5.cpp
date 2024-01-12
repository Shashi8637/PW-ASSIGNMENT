#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45

int num = 25;

int low = 0;
int high = num-1;
while(low<=high){
    int mid = low+(high-low)/2;
    if(mid*mid==num){
        cout<<mid;
        break;
    }
    else if(mid*mid>num){
        high=mid-1;
    }else{
        low=mid+1;
    }
}


 
 
 
    return 0;
}