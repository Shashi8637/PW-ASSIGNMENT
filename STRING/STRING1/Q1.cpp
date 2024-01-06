#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.
// Input : str = "Pbwcshkuiglhlds"
// Output : "P#w#s#k#i#l#l#s"
// input : str = "a"
// Output : "a"
 
 string str = "Pbwcshkuiglhlds";

 for(int i=0; i<str.length(); i++){
    if(i%2!=0) {
        str[i] = '#';
    }
 }
 for(int i=0; i<str.length(); i++){
    cout<<str[i]<<" ";
 }
 
 
    return 0;
}