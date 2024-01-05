#include<bits/stdc++.h>
using namespace std;

//Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
 
int main()
{
int arr[5][5]={{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10}};


for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
 
 
 
    return 0;
}