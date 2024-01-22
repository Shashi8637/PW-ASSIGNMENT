#include<bits/stdc++.h>
using namespace std;

//Given an array of integers, sort it in descending order using merge sort algorithm.
void merge(vector<int>&a,vector<int>&b,vector<int>&c){
    int i=0;
    int m=a.size();
    int j=0;
    int n=b.size();
    int k=0;
   while(i<m && j<n){
    if(a[i]<=b[j])c[k++] = b[j++];
     else c[k++]=a[i++];

   }
    while(j<n) c[k++]=b[j++];
    while(i<m) c[k++]=a[i++];

}



void sortMerge(vector<int>&arr){
    int n = arr.size();
    if (n == 1) {
        return;
    }
    int n1 = n/2;
    int n2 = n-n/2;
    vector<int>a(n1);
    vector<int>b(n2);

    for(int i=0; i<n1; i++){
        a[i]=arr[i];
    }
    for(int i=0; i<n2; i++){
        b[i]=arr[i+n1];
    }
   sortMerge(a);
   sortMerge(b);
   vector<int>ans(n);
   merge(a,b,arr);
}



 
int main()
{
vector<int>arr={1,2,6,4,5};
sortMerge(arr);
for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
}

    return 0;
}