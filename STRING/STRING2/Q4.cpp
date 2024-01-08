#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True
// Input : s = "book" , t = "hook"
// Output : False

string str = "pnp";
string ptr = "npp";
sort(str.begin(),str.end());
sort(ptr.begin(),ptr.end());

if(str==ptr){
    cout<<"anagram";
}
else{
    cout<<"not anagram";
}


 
 
 
    return 0;
}