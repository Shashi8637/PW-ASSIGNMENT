// #include<bits/stdc++.h>
// using namespace std;

// int countt = 0;
// int toh(int n,char a, char b,char c){

//     if(n==0)return 0;

//     toh((n-1),a,c,b);
//     cout<<a<<"->"<<c<<endl;
//     countt++;
//     toh((n-1),b,a,c);

//     return countt;

// }


 
// int main()
// {
// // Tower oF hanoi

// int n;
// cin>>n;


// cout<<toh(n,'a','b','c');
 
 
 
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void findSequence(vector<int> arr,int n, int k, int idx,vector<int> ans){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }

findSequence(arr,n,k,idx+1,ans);
ans.push_back(arr[idx]);
findSequence(arr,n,k,idx+1,ans);



}


 
int main()
{
//increasing sequence

vector<int>arr={1,2,3,4,5};
vector<int>ans;
int n=arr.size();
int k = 3;
findSequence(arr,n,k,0,ans);
 
 
 
    return 0;
}