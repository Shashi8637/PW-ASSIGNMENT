#include<bits/stdc++.h>
using namespace std;

int rev(int n, int r){

     if(n > 0 && n < 10) {
        return r * 10 + n;
    }
    if(n==0) return r;
    r = r*10+(n%10);
    rev(n/10,r);

}




 
int main()
{


int n;
cin>>n;
int r=0;
int revers = rev(n,r);
cout<<revers<<" ";
 
 
 
    return 0;
}