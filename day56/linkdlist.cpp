#include<iostream>
using namespace std;

class node{
     public:
     int data;
     node* next;

     node(int val){
          data=val;
          next=NULL;
     }
};

class list{
     node* head;
     node* tail;

     public:
     list(){
          head=tail=NULL;
     }

     void push_front(int val){
          node* newnode=new node(val);
          if (head==NULL)
          {
               head=tail=newnode;
               return;
          }
          
     }
};

int main(){
list ll;
}