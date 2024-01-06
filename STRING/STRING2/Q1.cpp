#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"

string str = "PWSkills";
string ptr = str;

reverse(ptr.begin(),ptr.end());

str += ptr;

for(int i=0; i<str.size(); i++){
    cout<<str[i]<<" ";
}
 
 
 
    return 0;
}