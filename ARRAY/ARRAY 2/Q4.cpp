#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.

int arr[5]={1,2,6,4,5};
int sum1 = 0;
int sum2 = 0;
for(int i=0; i<5; i++){
    if(i%2==0){
        sum1 = sum1+arr[i];
    }
    else{
        sum2 = sum2+arr[i];
    }
}

int diff = abs(sum1-sum2);
cout<<diff;
 
 
 
    return 0;
}