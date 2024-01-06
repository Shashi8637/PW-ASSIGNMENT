#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2

string str = "2947578";
int max = INT_MIN;
int secondMax = INT_MIN;
for (char ch : str) {
    int digit = ch - '0';
    if(digit>max){
        max = digit;
    }
    else if(digit>secondMax && digit!=max ){
        secondMax = digit;
    }
}

cout<<"First Maximum:"<<" "<<max<<endl;
cout<<"Second Maximum:"<<" "<<secondMax;
 
 
 
    return 0;
}