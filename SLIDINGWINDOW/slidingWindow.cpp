#include<bits/stdc++.h>
using namespace std;

void maxSum(vector<int>&arr, int k){
    int maxIdx = 0;
    int sum = 0;
    int maxSum=INT_MIN;
    int n = arr.size();
    for(int i=0; i<k; i++){
        sum += arr[i];
    }
     maxSum = sum;
    int i = 1;
    int j = k;
    while(j<n){
        sum = sum + arr[j]-arr[i-1];
        if(maxSum<sum){
            maxSum = sum;
            maxIdx = i;

        }
        i++;
        j++;
    }
    cout<<maxIdx<<endl;
    cout<<maxSum<<endl;

}
 
int main()
{

vector<int>arr={1,2,3,4,5,6,7};
int k = 4;
maxSum(arr,k);

 
 
 
    return 0;
}