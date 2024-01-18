// #include<bits/stdc++.h>
// using namespace std;

// int fibbonacci(int n){
//    if(n==1)return 1;
//    if(n==2)return 1;
//    return fibbonacci(n-1)+fibbonacci(n-2);

// }
 
// int main()
// {
// A function countAndSay is defined as:
// countAndSay(1) = “1”
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then
// converted into a different digit string.
// So, if sample input is n = 4,
// countAndSay(1) = 1
// countAndSay(2) = “one 1” => 11
// countAndSay(3) = “two 1” => 21
// countAndSay(4) = “one 2 one 1” => 1211

// int n;
// cin>>n;
// cout<<endl;
// cout<<fibbonacci(n);




 
 
 
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int power(int x,int n){
    if(n==1) return x;
    if(n%2==0){
        return power(x,n/2)*power(x,n/2);
    }
    else{
         return power(x,n/2)*power(x,n/2)*x;
    }
    
}



 
int main()
{
int x;
int n;
cin>>x>>n;


cout<<power(x,n);

 
 
 
    return 0;
}