#include<bits/stdc++.h>
using namespace std;
 
bool powerOftwo(int n){
    if(n==1) return true;
    if(n%2!=0) return false;
    
    return powerOftwo(n/2);

        
}

int main()
{
    // Given a positive integer, return true if it is a power of 2.

    int n;
    cin>>n;
    if(powerOftwo(n)){
        cout<<"true";
    }else{
        cout<<"false";
    }

 
 
 
    return 0;
}