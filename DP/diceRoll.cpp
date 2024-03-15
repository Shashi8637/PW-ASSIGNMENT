#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

vector<int>dp;
int f(int n){
    if(n==0) return 1;
    int sum = 0;
    if(dp[n]!=-1) return dp[n];
    for(int i=1; i<=6; i++){
        if(n-i<0) break;
        sum = (sum%mod + (f(n-i)%mod))%mod;
    }

    return dp[n] = sum%mod;

}
 
int main()
{
int n;
cin>>n;
dp.clear();
dp.resize(1000005,-1);
cout<<f(n);
 
 
 
    return 0;
}