#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;

int main(){
 //queue is first in first out
 priority_queue<int> q;  //work like stack and print arrange by high to low
// priority_queue<int, vector<int>, greater<int>> q;  //if you want reverse order print
q.push(5);
q.push(1);
q.push(10);

while(!q.empty()){
     cout<<q.top()<< " ";
     q.pop();
}
cout<<endl;
}