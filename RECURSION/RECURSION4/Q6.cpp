#include<bits/stdc++.h>
using namespace std;

void helper(string s,int start,int end,int n){
    if(end==n){
        cout<<s<<endl;
        return;
    }
    if(start<n) helper(s+'(',start+1,end,n);
    if(end<start) helper(s+')',start,end+1,n);
}

 
int main()
{
    //generate paranthesis

    int n;
    cin>>n;
    helper("",0,0,n);

 
 
 
    return 0;
}