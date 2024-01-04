#include<bits/stdc++.h>
using namespace std;
 
int main()
{
//Find the first non-repeating element in the array .
int arr[5]={1,1,3,5,5};

for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(i!=j && arr[i]==arr[j]) break;
        if(j==4){
           cout<<arr[i];
        }
    }
}

 
 
 
    return 0;
}