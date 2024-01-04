#include<bits/stdc++.h>
using namespace std;
 
int main()
{
//Find the minimum value out of all elements in the array.

int arr[5];

int min = INT_MAX;

for(int i=0; i<5; i++){
    cin>>arr[i];
}

for(int i=0; i<5; i++){
    if(min>arr[i]){
        min = arr[i];
    }
}

cout<<min;
 
 
 
    return 0;
}