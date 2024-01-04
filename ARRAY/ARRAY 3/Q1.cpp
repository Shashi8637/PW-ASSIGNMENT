//Count the number of triplets whose sum is equal to the given value x..
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x;
    cin>>x;
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            for(int k=j+1; k<5; k++){
                if(arr[i]+arr[j]==arr[k] || arr[i] + arr[k] == arr[j] || arr[j] + arr[k] == arr[i]){
                   
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                     count++;
                }
            }
        }
    }
    cout<<count<<endl;
 
 
 
    return 0;
}