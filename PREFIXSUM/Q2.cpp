#include<bits/stdc++.h>
using namespace std;


void print(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int findSum(vector<int>&v){
    int n = v.size();
    int n1 = n-n/2;
    vector<int>a;
    vector<int>b;
    for(int i=0; i<n1; i++){
        a.push_back(v[i]);
    }
    cout<<endl;
    print(a);
    for(int i=1; i<n1; i++){
        a[i]=a[i]+a[i-1];
    }
    cout<<endl;
    print(a);
    for(int i=n1; i<n; i++){
        b.push_back(v[i]);
    }
    cout<<endl;
    print(b);
    for(int i=1; i<n1; i++){
        b[i]=b[i]+b[i-1];
    }
    cout<<endl;
    print(b);
}



 
int main()
{
vector<int>v={1,2,3,4,5};
print(v);
findSum(v);
 
 
 
    return 0;
}