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

    //create a new node...
     void push_front(int val){
          node* newnode=new node(val);
          if (head==NULL)
          {
              head=tail=newnode ;
              return;
          }else
          {
               newnode->next =head;
               head = newnode;
          }
     }

     void push_back(int val){
          node* newnode=new node( val);

          if (head==NULL)
          {
               head=tail=newnode;
          }else
          {
               tail->next= newnode;
               tail=newnode;
          }
     }

     void pop_front(){
          if (head==NULL)
          {
               cout<<"ll is null value";
               return;
          }

          node* temp=head;
          head=head->next;
          temp->next=NULL;

          delete temp;
          
     }

     void pop_back(){
          if (head==NULL)
          {
               cout<<"ll is null value"<<endl;
               return;
          }

          node* temp= head;
          while (temp->next !=tail)
          {
               temp=temp->next;
          }
     temp->next=NULL;
     delete tail;
     tail=temp;          
     }

     void printLL(){
          node* temp=head;

          while (temp !=NULL)
          {
               cout<<temp->data<<"->";
               temp= temp -> next;
          }
          cout<<"null"<<endl;
     }
};

 int main(){
     list ll;
     ll.push_front(1);
     ll.push_front(2);
     ll.push_front(3);

     ll.push_back(4);

     ll.pop_front();
     ll.printLL();

     ll.pop_back();
     ll.printLL();

return 0;
 }