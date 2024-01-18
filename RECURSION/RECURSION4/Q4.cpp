//Binary string


#include<bits/stdc++.h>
using namespace std;

void generate(string s,int n){
    if((s.length()-1)==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n);
    generate(s+'1',n);
}
 
int main()
{

    //generate binary string
int n;
cin>>n;
string s;

generate(" ",n);
 
 
 
    return 0;
}