#include<iostream>
#include<vector>
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
class queue{
     node* head;
     node* tail;

public:
     queue(){
          head=tail=NULL;
     }

     void push(int data){
          node* newnode= new node(data);

          if (empty())
          {
               head=tail=newnode;
          }else
          {
               tail->next=newnode;
               tail=newnode;
          }
     }

     void pop(){
          if (empty())
          {
               cout<<"ll is empty";
               return;
          }
          node* temp=head;
          head=head->next;
          delete temp;
     }

     int front(){
          if (empty())
          {
               cout<<"ll is empty";
               return -1;
          }
          return head->data;
     }

     bool empty(){
          return head ==NULL;
     }
};

int main(){
queue q;
q.push(1);
q.push(2);
q.push(3);

while (!q.empty())
{
     cout<<q.front()<<" ";
     q.pop();
}
cout<<endl;

}