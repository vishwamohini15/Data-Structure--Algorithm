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
     // vector<int> vec(3,10);
     vector<int> vec1{1,2,3,4};
     vector<int> vec2(vec1);
     // vec2.erase(vec2.begin()+2);
     // vec2.erase(vec2.begin()+1, vec2.begin()+3);
     // vec2.insert(vec2.begin()+2, 100);
// vec2.clear();
// cout<<vec2.size()<<endl;
// cout<<vec2.capacity()<<endl;
// cout<<vec2.empty()<<endl;

cout<<*(vec2.begin())<<endl;
cout<<*(vec2.end())<<endl;


     for(int val :vec2){
          cout<<val<<" ";
               }

}