#include<bits/stdc++.h>
using namespace std;
 
 int prior(char a){
    if(a=='+' || a=='-') return 1;
    else return 2;
 }

 int solve(int a ,int b, char ch){
    if(ch=='+') return a+b;
    else if(ch=='-') return a-b;
    else if(ch=='*') return a*b;
    else return a/b;  
 }

int main()
{
  stack<int>val;
  stack<char>op;
  string str = "2+6*4/8-3";
  for(int i=0; i<str.length(); i++){
    if(str[i]>=48 && str[i]<=57 ){
        val.push(str[i]-48);
    }
    else{
        if(op.empty() || (prior(op.top())<prior(str[i]))) op.push(str[i]);
        else{
            while(!op.empty() &&  (prior(op.top())>= prior(str[i]))) {
                int v2 = val.top();
                val.pop();
                int v1 = val.top();
                val.pop();
                char ch = op.top();
                op.pop();
                int ans = solve(v1,v2,ch);
                val.push(ans);
            }
            op.push(str[i]);
        }
         
    }


  }

  while(!op.empty()){
                int v2 = val.top();
                val.pop();
                int v1 = val.top();
                val.pop();
                char ch = op.top();
                op.pop();
                int ans = solve(v1,v2,ch);
                val.push(ans);

            }
            cout<<val.top();
            cout<<endl;
            cout<<2+6*4/8-3;
  
 
 
 
    return 0;
}