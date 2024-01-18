#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b){

    if(a==0){
        return b;
    }


    return hcf(b%a,a);
}


 
int main()
{
//euclid's algorithm to find hcf
int a;
int b;
cin>>a>>b;

cout<<hcf(a,b);


 
 
 
    return 0;
}