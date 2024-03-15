#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>>dp;


int f(string str1, string str2,int i,int j){
    if(i>=str1.size()) return dp[i][j]= 0;
    if(j>=str2.size()) return dp[i][j]= 0;

    if(str1[i]==str2[j])  return dp[i][j] =  1 + f(str1,str2,i+1,j+1);
    else{
       return dp[i][j] =  max(f(str1,str2,i+1,j),f(str1,str2,i,j+1));
    }

}
 
int main()
{
    dp.clear();
    dp.resize(1005,vector<int>(1005,-1));
string str1 = "abc";
string str2 = "def";
cin>>str1>>str2;
int ans = f(str1,str2,0,0);

cout<<ans;
 
    return 0;
}