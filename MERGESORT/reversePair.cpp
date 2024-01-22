#include<bits/stdc++.h>
using namespace std;
int ans = 0;
void mergeConq(vector<int>&arr,int low , int mid , int high){
   int i = low;
   int j = mid+1;
while(i<=mid && j<=high){
    if(arr[i]>2*arr[j]){
     ans += mid - i + 1;
     j++;
   }
   else{
    i++;
   }

}
   

i = low;
j = mid+1;




   vector<int>b;
   while(i<=mid && j<=high){
     if(arr[i]>=arr[j]){
        b.push_back(arr[j++]);
     }else{
        b.push_back(arr[i++]);
     }

   }
   while(i<=mid){
    b.push_back(arr[i++]);
   }
   while(j<=high){
    b.push_back(arr[j++]);
   }
  for(int i=low; i<high; i++){
    arr[i]=b[i-low];
    
  }

}



void mergeDiv(vector<int>&arr,int low, int high){
    int mid = low +(high-low)/2;
    if(low==high) return;
    mergeDiv(arr,low,mid);
    mergeDiv(arr,mid+1,high);
    mergeConq(arr,low,mid,high);
}



 
int main()
{
vector<int>arr={1,3,2,1,3};
mergeDiv(arr,0,arr.size()-1);
for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
 cout<<ans;
 
 
    return 0;
}