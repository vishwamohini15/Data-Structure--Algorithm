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

using namespace std;

int main(){
//  set<int> s;
unordered_set<int>s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
// s.insert(6);

s.insert(2);
s.insert(3);
s.insert(4);

cout<<s.size()<<endl;
// cout<<"lower bound="<<*(s.lower_bound(4))<<endl;
// cout<<"upper bound="<<*(s.upper_bound(4))<<endl;


 for(auto val:s){
     cout<<"set is="<<val<<" ";     
 }
cout<<endl;


 
}