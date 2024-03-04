#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int arr[5] = {9,3,7,5,6};
int ans[5];
ans[4] = -1;
stack<int>st;
st.push(arr[4]);
for(int i=5-2; i>=0; i--){
    while(!st.empty() && st.top()<=arr[i]) st.pop();
    if(st.empty()) ans[i] = -1;
    else{
        ans[i] = st.top() ;
    }
     st.push(arr[i]);

}

for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0; i<5; i++){
    cout<<ans[i]<<" ";
}
 
 
 
    return 0;
}