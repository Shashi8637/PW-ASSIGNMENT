// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char arr[][30] = {"physicswallah", "quiz", "practice", "pwskills", "coding"};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     char temp[20];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (strcmp(arr[j], arr[j + 1]) > 0)
//             {
//                 strcpy(temp, arr[j]);
//                 strcpy(arr[j], arr[j + 1]);
//                 strcpy(arr[j + 1], temp);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int arr[5]={1,2,4,7,5};
int total = 0;
int n = sizeof(arr)/sizeof(arr[0]);
bool flag = false;
for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i; j++) {
        if(arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);
             flag = true;
        }
       
    }
        if(flag==false) {
          break;
      }
}
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}


cout<<endl;
int num1 = 0;
for(int i=0; i<n; i++){
    num1 *= 10;
    num1 += arr[i];
}

cout<<num1<<endl;

for(int i=n; i>=0; i--){
    if(arr[i]>arr[i-1]){
        swap(arr[i],arr[i-1]);
        break;
    }
}


for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int num2 = 0;
for(int i=0; i<n; i++){
    num2 *= 10;
    num2 += arr[i];
}
cout<<num2<<endl;


 total = num1+num2;
 cout<<total<<" ";

 
 
 
    return 0;
}

