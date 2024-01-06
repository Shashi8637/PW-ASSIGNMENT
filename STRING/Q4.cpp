#include<bits/stdc++.h>
using namespace std;
 
int main()
{
string str = "pwians";
int n = str.size();
reverse(str.begin()+(n)/2,str.end());

for(int i=0; i<n; i++){
    cout<<str[i]<<" ";
}
 
 
 
    return 0;
}