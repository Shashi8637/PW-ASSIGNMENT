#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
  public:
  Node *head;
  Node *tail;
  int size;
  LinkedList(){
    head = tail = NULL;
    size = 0;
  }
  void insertAtEnd(int val){
    Node *temp = new Node(val);
    if(size==0) head = tail = temp; 
    else{
        tail->next = temp;
        tail = temp;
    }
    size++;
  }

  void insertAtidx(int val,int idx){
    Node *temp = new Node(val);
    Node *t = head;
    for(int i=1; i<idx-1; i++){
        t = t->next;
    }
    temp->next = t->next;
    t->next = temp;
  }




  void insertAtStart(int val){
    Node *temp = new Node(val);
    if(size==0) head=tail = temp;
    else{
        temp->next = head;
        head = temp;
    }
    size++;
  }

  void deleteAtEnd(){
    if(size==0) cout<<"Invlid";
    else{
        Node *temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        tail = temp;
        tail->next = NULL;
    }
    size--;
  }

  void deleteAtFirst(){
    if(size==0)cout<<"invalid";
    else{
        head = head->next;
    }
    size--;
  }

  void deleteAtIdx(int idx){
    Node *temp = head;
    for(int i=1; i<idx-1; i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    size--;
  }

  void getEleMentList(int idx){
    Node *temp = head;
    for(int i=1; i<idx; i++){
        temp = temp->next;
    }
    cout<<temp->val<<" ";
  }


  void printLinkedList(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
  }
};
 
int main()
{
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.printLinkedList();
    ll.insertAtStart(5);
    ll.insertAtStart(2);
    ll.insertAtStart(1);
    ll.printLinkedList();
    ll.insertAtidx(80,4);
    ll.printLinkedList();
    ll.deleteAtEnd();
    ll.printLinkedList();
    ll.deleteAtFirst();
    ll.printLinkedList();
    ll.deleteAtIdx(2);
    ll.printLinkedList();
    ll.getEleMentList(2);

 
 
 
    return 0;
}