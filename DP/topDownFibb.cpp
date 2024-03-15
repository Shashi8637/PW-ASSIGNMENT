#include<bits/stdc++.h>
using namespace std;

vector<int>dp;

int fibb(int n){
    if(n==1 || n==0) return n;
    if(dp[n]!=-1) return dp[n];
    
    return dp[n]=fibb(n-1)+fibb(n-2);

}
 
int main()
{
int n;
cin>>n;
dp.clear();
dp.resize(n+1,-1);
cout<<fibb(n);

 
 
 
    return 0;
}