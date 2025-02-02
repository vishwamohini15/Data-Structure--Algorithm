#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
node* prev;

 node(int val){
     data=val;
     next=prev=NULL;
 }
};

class Doublylinklist{
     node* head;
     node* tail;

     public:
     Doublylinklist(){
          head=tail=NULL;
     }

     void push_front(int val){
          node* newnode = new node(val);

          if (head==NULL)
          {
               head=tail=newnode;
          }else{
               newnode->next=head;
               head->prev=newnode;
               head = newnode;
          }
     }
};

int main(){
Doublylinklist dll;
dll.push_front(1);
dll.push_front(2);
dll.push_front(3);

return 0;
}