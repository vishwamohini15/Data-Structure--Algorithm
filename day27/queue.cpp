#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;

int main(){
queue<int> q;  //queue is first in first out
q.push(1);
q.push(2);
q.push(3);

while(!q.empty()){
     cout<<q.front()<< " ";
     q.pop();
}
cout<<endl;
}