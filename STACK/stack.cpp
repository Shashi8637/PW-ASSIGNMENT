#include<bits/stdc++.h>
using namespace std;


void first(stack<int>& st){
    while(st.size()>0){
       

    }
}
 
int main()
{
stack<int>st;
while(st.size()<5){
    int x;
    cin>>x;
    st.push(x);
}
stack<int>temp;
st.pop();
int x = st.top();
st.pop();
temp.push(x);
x = temp.top();
st.push(x);
while(st.size()>=3){
    cout<<st.top()<<" ";
    st.pop();
}




 
 
    return 0;
}