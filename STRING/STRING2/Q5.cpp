#include<bits/stdc++.h>
using namespace std;
 
int main()
{
string str = "proud to be pwians";
string maxword = "";
 string word = " ";

for(int i=0; i<str.length(); i++){
   
    if(str[i] == ' '){
        maxword = max(maxword,word);
        word = " ";
    }
    else{
        word += str[i];
    }
}
maxword = max(maxword,word);


cout<<maxword;

 
 
 
    return 0;
}
