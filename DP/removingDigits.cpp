#include<bits/stdc++.h>
using namespace std;


vector<int>dp;
vector<int>getDigit(int n){
    vector<int>result;
    
    while(n>0){
        if(n%10!=0){
            result.push_back(n%10);
        }
        n = n/10;
    }

    return result;
}

int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int>d = getDigit(n);
    int res = INT_MAX;
    for(int i=0; i<d.size(); i++){
        res = min(res,f(n-d[i]));
    }

    return dp[n] = 1 + res;

}
 
int main()
{
  dp.clear();
  dp.resize(1000005,-1);
  int n;
  cin>>n;
  cout<<f(n);
 
 
 
    return 0;
}