// #include<bits/stdc++.h>
// using namespace std;

// int mazePath(int sr, int sc, int er, int ec){
//     if(sr>er || sc>ec) return 0;
//     if(sr==er || sc==ec) return 1;

//     int rightway = mazePath(sr,sc+1,er,ec);
//     int downway = mazePath(sr+1, sc,er,ec);

//     int totalway = rightway+downway;

//     return totalway;
// }
 
// int main()
// {

// cout<<mazePath(1,1,2,2);
 
 
 
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int curr ,int n){
   if(curr==n){
    return;
   }
    
   print(arr,curr+1,n);
   cout<<arr[curr]<<" ";
  

}
 
int main()
{
// Print all the elements of an array in reverse order.

int arr[]={1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);


print(arr,0,n);
 
 
 
    return 0;
}