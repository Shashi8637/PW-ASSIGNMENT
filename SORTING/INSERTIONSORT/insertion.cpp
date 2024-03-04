#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int arr[5]={1,6,5,2,3};
for(int i=0; i<5; i++){
    int j=i;
    while(j>=1 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
}

for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}
 
 
 
    return 0;
}