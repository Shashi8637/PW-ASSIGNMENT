#include<bits/stdc++.h>
using namespace std;
 

 class Node{
    public:
    int val;
    Node* next;
    Node* pre;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
 };

 class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size=0;
    LinkedList(){
        head=tail=NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
     if(size==0) head=tail=temp;
     else{
        tail->next = temp;
        temp->pre = tail;
        tail = temp;
     }
     size++;

    }

    void insertAtFirst(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next = head;
            head->pre = temp;
            head = temp;
        }
        size++;
        

    }

    void insertAtidx(int val,int idx){
        Node* temp = new Node(val);
        Node* traverse = head;
        for(int i=1; i<idx-1; i++){
            traverse = traverse->next;
        }
            temp->next = traverse->next;
            traverse->next->pre = temp;
            traverse->next = temp;
            temp->pre = traverse;

            size++;
        
    }

    void print(){
        Node* temp = tail;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->pre;
        }
    }
    

 };



int main()
{

LinkedList ll;

ll.insertAtEnd(50);
ll.insertAtEnd(60);
ll.insertAtEnd(70);
ll.insertAtEnd(80);
ll.insertAtFirst(10);
ll.insertAtFirst(20);
ll.insertAtFirst(30);
ll.insertAtFirst(40);
ll.insertAtidx(44,5);

ll.print();



 
 
 
    return 0;
}