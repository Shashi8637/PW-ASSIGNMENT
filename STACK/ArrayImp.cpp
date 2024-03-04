#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int arr[5];
    int idx;
    Stack(){
        idx = -1;
    }

    void push(int val){
        int n = sizeof(arr)/sizeof(arr[0]);
        if(idx==n-1){
            cout<<"can not be pushed";
            return ;
            }
            idx++;
            arr[idx] = val;
            cout<<endl;
    }
   

    void pop(){
        if(idx==-1){
            cout<<"delete nhi ho skta"<<" ";
            return;
        }
        idx--;
        cout<<endl;

    }
    

    void print(){
       for(int i=0; i<=idx; i++){
        cout<<arr[i]<<" ";
       }
    }

    int top(){
        cout<<arr[idx];
    }

};
 
int main()
{

Stack st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
st.print();
cout<<endl;
st.pop();
st.print();
cout<<endl;
st.top();
 
 
 
    return 0;
}