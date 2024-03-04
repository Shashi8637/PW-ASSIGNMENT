#include<bits/stdc++.h>
using namespace std;

int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}

string solve(string val1, string val2, char ch){
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;

    return s;

}
 
int main()
{
  stack<string>val;
  stack<char>op;
  string str = "2+6*4/8-3";
  for(int i=0; i<str.length(); i++){
    if(str[i]>=48 && str[i]<=57){
        val.push(to_string(str[i]-48));
    }
    else{
        if(op.empty() || (prio(op.top()))<(prio(str[i]))) op.push(str[i]);
        else{
            while(!op.empty() &&  (prio(op.top()))>=(prio(str[i]))){
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                char ch = op.top();
                op.pop();
                string ans = solve(val1,val2,ch);
                val.push(ans);
            }
            op.push(str[i]);
        }
    }

  }

  while(!op.empty()){
    string val2 = val.top();
    val.pop();
    string val1 = val.top();
    val.pop();
    char ch = op.top();
    op.pop();
    string ans = solve(val1,val2,ch);
    val.push(ans);
  }

  cout<<val.top();
 
 
 
    return 0;
}
