#include<bits/stdc++.h>
using namespace std;

void kthElementRemove(stack<int>&st , int ele){
    int deleteEle = st.size()-ele;
    while(st.size()>deleteEle){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
 
int main()
{
//Remove kth element from top in a given stack.
stack<int>st;
while(st.size()<8){
    int x;
    cin>>x;
    st.push(x);
}

kthElementRemove(st,3);
 
 
 
    return 0;
}