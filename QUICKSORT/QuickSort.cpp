#include<bits/stdc++.h>
using namespace std;

int partitions(int arr[], int startIdx, int endIdx){
    int pivotEle = arr[startIdx];
    int count = 0;
    for(int i=startIdx+1; i<=endIdx; i++){
       if(arr[i]<=pivotEle){
        count++;
       }
    }
    int pivotIdx = count + startIdx;
    swap(arr[pivotIdx],arr[startIdx]);
    int i = startIdx;
    int j = endIdx;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotEle) i++;
        if(arr[j]>pivotEle) j--;
        else if(arr[i]>pivotEle && arr[j]<=pivotEle){
            swap(arr[i],arr[j]);
            i++;
            j--;

        }
    }
    return pivotIdx;

}







void quickSort(int arr[], int startIdx, int endIdx){

    if(startIdx>=endIdx) return;
    int pivotIdx = partitions(arr,startIdx,endIdx);

    quickSort(arr,startIdx,pivotIdx-1);
    quickSort(arr,pivotIdx+1,endIdx);
}

 
int main()
{
int arr[]={3,4,6,2,5};
int n = sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
quickSort(arr,0,n-1);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
 
 
 
    return 0;
}