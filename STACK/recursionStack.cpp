#include<bits/stdc++.h>
using namespace std;


void print(stack<int>&st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
   
}

void recursive(stack<int>&st){
    if(st.size()==0) return;
    int x = st.top();
    cout<<st.top()<<" ";
    st.pop();
    recursive(st);
    st.push(x);
    
}
 
int main()
{
stack<int>st;
while(st.size()<5){
    int x;
    cin>>x;
    st.push(x);
}
recursive(st);
cout<<endl;
print(st);

// while(st.size()>0){
//     cout<<st.top()<<" ";
//     st.pop();
// }

 
 
 
    return 0;
}