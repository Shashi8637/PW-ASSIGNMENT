// #include<bits/stdc++.h>
// using namespace std;


// int sum = 0;
// int printSum(int n){
    
//     if(n==0) return 0;

//     sum += n;
//     printSum(n-1);
//     return sum;
// }
 
// int main()
// {
// int n;
// cin>>n;
// printSum(n);
// cout<<sum;
 
 
 
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int power(int a, int b){
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
 
// int main()
// {
// int a;
// int b;
// cin>>a>>b;
// cout<<power(a,b);
 
 
 
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;


int sum =0;
void printOddSum(int a,int b){
    if(a>b) return;
    if(b%2!=0){
       cout<<a<<" ";
       sum += a;
    }
    printOddSum(a+2,b);

   


}
 
int main()
{
// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
// recursion.
int a,b;
cin>>a>>b;
if(a%2==0)a++;
printOddSum(a,b);
cout<<endl;
cout<<sum;

 
 
 
    return 0;
}