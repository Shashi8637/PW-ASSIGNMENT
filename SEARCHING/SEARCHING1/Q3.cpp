#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
// maximum number of 1’s.
// Input matrix : 0 1 1 1
// 0 0 1 1
// 1 1 1 1 // this row has maximum 1s
// 0 0 0 0
// Output: 2

int arr[3][4]={{0 ,0 ,1 ,1},{1, 1 ,1 ,1 },{0, 0, 0 ,0}};
 int maxStore = -1;
 int idx = -1;
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        int low = 0;
        int high = 3;
        int store = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[i][mid]==1){
                high = mid - 1;
            }
            else if(arr[i][mid]<1){
                low = mid + 1;
            }
        }
        store = 4-low;
        if(maxStore<store) {
            maxStore= store;
            idx = i+1;
        } 

    }


}

cout<<"Row number:"<<" "<<idx<<endl<<"maxNumber One Count:"<<" "<<maxStore;



 
 
 
    return 0;
}


