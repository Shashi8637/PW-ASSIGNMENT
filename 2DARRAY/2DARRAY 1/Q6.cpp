#include<bits/stdc++.h>
using namespace std;
 
int main()
{
//Write a function which accepts a 2D array of integers and its size as arguments and displays the
//elements of middle row and the elements of middle column.

int arr[5][5]={{1,2,3,4,5},{3,4,5,6,7},{7,6,5,4,3},{8,7,6,5,4},{1,2,37,8,0}};
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      if(j==2 || i==2){
        cout<<arr[i][j]<<" ";
      } else{
        cout<<"*"<<" ";
      } 
      
      }
      cout<<endl;
}
 
 
 
    return 0;
}