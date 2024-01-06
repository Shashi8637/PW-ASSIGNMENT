#include<bits/stdc++.h>
using namespace std;
 
int main()
{
// Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244
// Input : "12"
// Output : 12

string str = "1234";
int result = 0;
int i = 0;

while(str[i] >= '0' && str[i] <= '9'){
    result = result*10 + (str[i]-'0');
    i++;
}

cout<<result;
 
 
 
    return 0;
}