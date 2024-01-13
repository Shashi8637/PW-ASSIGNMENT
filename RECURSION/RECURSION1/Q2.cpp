#include<bits/stdc++.h>
using namespace std;


int stairStep(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;

    return stairStep(n-1)+stairStep(n-2)+stairStep(n-3);
}
 
int main()
{
// Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
// steps at each level.
int n;
cin>>n;

cout<<stairStep(n);
 
 
 
    return 0;
}