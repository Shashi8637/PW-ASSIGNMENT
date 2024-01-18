#include<bits/stdc++.h>
using namespace std;

void findSubArr(vector<int>&arr,int n,vector<int> emparr,int idx){
    if(idx == n){
        for(int i=0; i<emparr.size(); i++){
            cout<<emparr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    findSubArr(arr,n,emparr,idx+1);

    
    if(emparr.size()==0){

        emparr.push_back(arr[idx]);
        findSubArr(arr,n,emparr,idx+1);
    }
    else if(arr[idx-1]==emparr[emparr.size()-1]){
         emparr.push_back(arr[idx]);
        findSubArr(arr,n,emparr,idx+1);
    }
   

}




 
int main()
{
//finding subarray;

vector<int>arr={1,2,3};
int n = sizeof(arr)/sizeof(arr[0]);
vector<int>emparr;
findSubArr(arr,n,emparr,0);
 
 
 
    return 0;
}