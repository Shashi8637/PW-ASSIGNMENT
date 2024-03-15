#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
     int arr[5];
     int f;
     int r;
     int size;
    Queue(){
        f = r = 0;
        size = 0;

    }
    void push(int x){
        int n = sizeof(arr)/sizeof(arr[0]);
        if(r==n) {
            cout<<"stack is Full"<<" ";
            return;
        }
            
        if(size==0)arr[r] = x;
        else{
            arr[r] = x;
            
        }
        r++;
        size++;
    }
    void deleteQueue(){
        f++;
    }

    void print(){
         int n = sizeof(arr)/sizeof(arr[0]);
        for(int i=f; i<r; i++){
            cout<<arr[i]<<" ";
        }
    }

};
 
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.deleteQueue();
    q.deleteQueue();

    // q.push(50);
    // q.push(50);

    q.print();

 
 
 
    return 0;
}