#include<iostream>
using namespace std;

class circularqueue{
     int* arr;
     int currsize, cap;
     int f, r;

     public:
     circularqueue(int size){
          cap=size;
          arr=new int[cap];
          currsize=0;
          f=0;
           r=-1;
     }

     void push(int data){
          if (currsize==cap)
          {
               cout<<"co is full\n";
               return;
          }

          r=(r+1)%cap;
          arr[r]=data;
          currsize++;
          
     }

     void pop(){
          if (empty())
          {
               cout<<"co is empty\n";
               return;
          }
          
          f=(f+1)%cap;
          currsize--;
     }

     int front(){
          if (empty())
          {
               cout<<"co is Empty \n";
               return -1;
          }
          return arr[f];
     }

     bool empty(){
          return currsize==0;
     }

     void printArr(){
          for (int i = 0; i <cap; i++)
          {
               cout<<arr[i]<<" ";
          }
          cout<<endl;
     }
};

int main(){
     circularqueue cq(3);

     cq.push(1);
     cq.push(2);
     cq.push(3);

     cq.pop();
     cq.push(4);

     cq.printArr();

     while (!cq.empty())
     {
          cout<<cq.front()<<" ";
          cq.pop();
     }
     cout<<endl;
     return 0;
}