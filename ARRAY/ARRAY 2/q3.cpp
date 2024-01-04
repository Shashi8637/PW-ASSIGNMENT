//Check if the given array is sorted or not

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int arr[5]={1,47,43,66,90};
bool flag = false;
for(int i=0; i<4; i++){
    if(arr[i]>arr[i+1]){
        flag = true;
    }
   
}
if(flag==true){
    cout<<"not sorted";
}
else{
    cout<<"sorted";
}
 
 
 
    return 0;
}