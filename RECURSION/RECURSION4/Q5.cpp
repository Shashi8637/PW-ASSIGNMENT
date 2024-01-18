#include<bits/stdc++.h>
using namespace std;
int kthsymbol(int n, int k){
    if(n==1) return 0;

    if(k%2==0){
        int flip = kthsymbol(n-1,k/2) ;
        if(flip==0) return 1;
        else return 0;
    }
    else{
       return kthsymbol(n-1,k/2+1);
    }
}


 
int main()
{

//kth symbol in grammer

int n;
cin>>n;
int k;
cin>>k;

cout<<kthsymbol(n,k);
 
 
 
    return 0;
}