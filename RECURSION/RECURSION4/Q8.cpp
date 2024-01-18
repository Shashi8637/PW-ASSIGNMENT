#include<bits/stdc++.h>
using namespace std;

void helper(string str, string ans){
    if(str==""){
       cout<<ans<<endl;
       return;
    }
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        helper(left+right,ans+ch);
    }

}


 
int main()
{
//permutation 

string str = "abc";
helper(str,"");


 
 
 
    return 0;
}