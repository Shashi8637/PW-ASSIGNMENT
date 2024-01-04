//Count the number of elements strictly greater than x.
#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int x;
cin>>x;
int count = 0;

int arr[5]={12,45,78,33,22};
for(int i=0; i<5; i++){
    if(x<arr[i]) count++;
}
cout<<count;
 
 
    return 0;
}

