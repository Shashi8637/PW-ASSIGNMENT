#include<bits/stdc++.h>
using namespace std;
bool check(int arr[]){
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
    }
    return false;
}
int main()
{
//Given an array, predict if the array contains duplicates or not.

int arr[5];
for(int i=0; i<5; i++){
    cin>>arr[i];
}

cout<<check(arr);
 
 
 
    return 0;
}