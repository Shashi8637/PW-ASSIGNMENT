#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Stack{
    public:
    Node* head;
    int size;

    Stack(){
        head=NULL;
        size = 0;
    }

    void push(int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
        size++;

    }

    void pop(){
        if(size==0) cout<<"cannot Pop";
        head = head->next;
        size--;
    }
    void top(){
        cout<<head->val<<" ";
        cout<<endl;
    }

    void print(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
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
 st.pop();
 st.print();
 st.top();
 
 
 
 
    return 0;
}