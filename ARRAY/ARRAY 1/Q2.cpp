#include<bits/stdc++.h>
using namespace std;

//Find the second largest element in the given Array in one pass.
 
int main()
{
int arr[5];
for(int i=0; i<5; i++){
    cin>>arr[i];
}

int max = INT_MIN;
for(int i=0; i<5; i++){
    if(arr[i]>max){
        max = arr[i];
    }
}
int secondMax = INT_MIN;
for(int i=0; i<5; i++){
    if(arr[i]>secondMax && arr[i]!=max){
        secondMax = arr[i];
    }
}

cout<<max;
cout<<endl;
cout<<secondMax;
 
 
 
    return 0;
}