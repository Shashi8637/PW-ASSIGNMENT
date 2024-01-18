#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &n,int start,int end){
if(start>=end){
    return true;
}

    if(n[start]==n[end]){
       palindrome(n,start+1,end-1);
    }
    else{
        return false;
    }
}
 
int main()
{
string n;
cin>>n;

bool flag = palindrome(n,0,n.size()-1);

if(flag==true){
    cout<<"palindrome";
}else{
    cout<<"not palindrome";
}


 
 
 
    return 0;
}