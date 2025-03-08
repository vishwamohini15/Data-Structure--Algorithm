#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main(){
deque<int> q;
q.push_back(1);
q.push_front(2);
q.push_front(3);
q.push_back(4);
//2314

cout<<q.front()<<" "<<q.back()<<endl;
q.pop_back();
cout<<q.front()<<" "<<q.back()<<endl;

return 0;

}