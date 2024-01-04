// #include<bits/stdc++.h>
// using namespace std;

// int  palindrom(int n){
//     int r = 0;
//     while(n>0){
//         r *= 10;
//         r = (n%10) + r;
//         n /= 10;
//     }
//     return r;
// }
 
// int main()
// {
// int n;
// cin>>n;
// int palin = palindrom(n);
// if(palin==n){
//     cout<<"palindrom";
// }
// else{
//     cout<<"not palindrome";
// }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
 int arr[3];
 int reverseArr[3];

 for(int i=0; i<3; i++){
    cin>>arr[i];
 }
 reverse_copy(arr,arr+3,reverseArr);
 for(int i=0; i<3; i++){
    cout<<reverseArr[i]<<" ";
 }
 int i=0;
 int j=0;
 bool flag = false;
 while(i<3 && j<3){
   if(arr[i]!=reverseArr[j]){
      flag = true;
   }
   i++;
   j++;
 }
 cout<<endl;

if(flag == false){
   cout<<"palindrom";
}
else{
   cout<<"not palindrome";
}
 

 
 
    return 0;
}


 
 
 
