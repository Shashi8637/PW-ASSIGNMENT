#include<bits/stdc++.h>
using namespace std;

// int f(int n, int count){
//     if(n==1) return count;
//     if(n%2==0){
//        count += 1;
//        if(n<3) return count;
//         f(n/3,count);
//     }else{
//         count += 1;
//         f(n-1,count);
//     }
// }
vector<int>dp;
#define inf INT_MAX
int f(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    
    return dp[n] = 1 + min({f(n-1),(n%2==0)?f(n/2):inf,(n%3==0)? f(n/3):inf});

   


}


 
int main()
{
    dp.clear();
    dp.resize(1005,-1);
    int n ;
    cin>>n;

    cout<<f(n);
 
 
 
    return 0;
}