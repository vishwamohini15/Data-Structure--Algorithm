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
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

// s.insert(4);  //seta ignor dublicate value only print one ti,e if repeate again same value
//     s.insert(5);
    cout<<s.size();
for(auto val:s){
cout<<val<<endl;
}

}