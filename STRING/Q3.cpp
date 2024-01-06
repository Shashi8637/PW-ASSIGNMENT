// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str = "abccb";
    string ptr=str;
    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;

    reverse(ptr.begin(),ptr.end());

    for(int i=0; i<str.length(); i++){
        cout<<ptr[i]<<" ";
    }

    cout<<endl;

    if(ptr==str){
        cout<<"palindrom";
    }else{
        cout<<"that not palondrom";
    }
 
 
 
    return 0;
}

