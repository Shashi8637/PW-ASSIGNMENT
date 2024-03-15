#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n ;
    cin>>n;
int a = 0;
int b = 1;
int i=2;
int c;
while(i<=n){
    c = a+b;
    a = b;
    b = c;
    i++;

}
cout<<c;
 
 
 
    return 0;
}