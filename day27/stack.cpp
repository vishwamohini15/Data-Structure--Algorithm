#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;

int main(){
stack<int> s;  //stack is last in first out
s.push(1);
s.push(2);
s.push(3);
// cout<<s.top();
// cout<<endl;
// s.pop();
// cout<<endl;
// cout<<s.top();

// while(!s.empty()){
// cout<<s.top();
// s.pop();
// }
// cout<<endl;

stack<int> s2;
s2.swap(s);
cout<<"size of s1="<<s.size()<<endl;
cout<<"size of s2="<<s2.size()<<endl;

}