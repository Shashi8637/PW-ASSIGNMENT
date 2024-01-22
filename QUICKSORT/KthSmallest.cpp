#include<bits/stdc++.h>
using namespace std;

int  partition(int arr[],int start,int end){
    int pivotele = arr[start];
    int count = 0;

    for(int i=start+1; i<=end; i++){
          if(arr[i]<=pivotele) count++;
    }
    int pivotidx = start+count;
    swap(arr[pivotidx],arr[start]);
    int i=start;
    int j = end;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotele) i++;
        if(arr[j]>pivotele) j--;
        else if(arr[i]>pivotele && arr[j]<=pivotele){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;


}

int mergeSort(int arr[], int start, int end,int k){

    if(start>=end) return -1;
  int partitionIdx = partition(arr,start,end);
  if(partitionIdx+1==k) return arr[partitionIdx];
  else if(partitionIdx+1<k){
     mergeSort(arr,start,partitionIdx-1,k);
  }else{
    mergeSort(arr,partitionIdx+1,end,k);
  }

 
  

}




 
int main()
{
int arr[]={3,5,2,6,7,0,4};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 3;
int kIdx = mergeSort(arr,0,n-1,k);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<kIdx;
 
 
 
    return 0;
}