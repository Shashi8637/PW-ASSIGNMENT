#include<bits/stdc++.h>
using namespace std;

void combinationSum(vector<int>&arr, vector<int> ans, int target,int idx){
    if(target==0){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    if(target<0)return;


   for(int i=idx; i<arr.size(); i++){
    ans.push_back(arr[i]);
    combinationSum(arr,ans,target-arr[i],i);
    ans.pop_back();
   }
    
}



 
int main()
{

 vector<int>arr={2,3,5};
 int target = 8;
 vector<int>ans;

 combinationSum(arr,ans,target,0);
 
 
    return 0;
}