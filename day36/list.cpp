#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <algorithm> 
using namespace std;

int main(){
     list<int> l;
     l.push_back(1);
     l.push_back(2);
     l.push_front(3);
     l.push_front(4);

     l.pop_back();
     l.pop_front();
     for(int val : l){
          cout<<val<<" ";
     }
}