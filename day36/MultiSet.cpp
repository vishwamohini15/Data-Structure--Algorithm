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
    multiset<int> s; //multiset prints also dublicate sets but in assending order.............

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

  s.insert(3);
    s.insert(4);
    s.insert(5);

for(auto val:s){
cout<<val<<endl;
}

}