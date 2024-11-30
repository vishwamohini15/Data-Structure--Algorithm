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
//     s.insert(4);
    s.insert(5);

//lowerbound try to find the value i want but if not present that value its retern just above the value like 4=5 but if no value is present above that then return 0;
cout<<"lower bound="<<*(s.lower_bound(4))<<endl; 
for(auto val:s){
cout<<val<<endl;
}

}