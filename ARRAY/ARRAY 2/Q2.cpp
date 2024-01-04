//WAP to find the largest three elements in the array.
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int firstMax = INT_MIN;
int secondMax = INT_MIN;
int thirdMax = INT_MIN;

int arr[5] = {11,32,67,90,22};

for(int i=0; i<5; i++){
    if(arr[i]>firstMax){
        thirdMax=secondMax;
        secondMax=firstMax;
        firstMax=arr[i];
    }
    else if (arr[i]>secondMax && arr[i]!=firstMax)
    {   
        thirdMax = secondMax;
       secondMax=arr[i];
    }
    else if(arr[i]>thirdMax && arr[i]!=secondMax && arr[i]!=firstMax){
        thirdMax = arr[i];
    }

}
cout<<firstMax<<endl;
cout<<secondMax<<endl;
cout<<thirdMax<<endl;


 
 
 
    return 0;
}
