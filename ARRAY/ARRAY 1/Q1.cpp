#include<bits/stdc++.h>
using namespace std;

//Calculate the product of all the elements in the given array.
 
int main()
{
int arr[5];
int x = 1;
for(int i=0; i<5; i++){
    cin>>arr[i];
}
for(int i=0; i<5; i++){
    x = x*arr[i];
}

cout<<x;

 
    return 0;
}