#include<bits/stdc++.h>
using namespace std;

int kthsmall(int arr[],int n, int k){
    for(int i=0; i<k; i++){
        int min = INT_MAX;
        int idx = -1;
        for(int j=i; j<n; j++){
            if(min>arr[j]){
                min = arr[j];
                idx = j;
            }
        }
        swap(arr[i],arr[idx]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return arr[k-1];


}
 
int main()
{
    int arr[9]={1,6,7,4,5,9,7,4,0};
    int k = 3;

     int smallest = kthsmall(arr,9,k);
     cout<<smallest<<" ";
    
 
 
    return 0;
}