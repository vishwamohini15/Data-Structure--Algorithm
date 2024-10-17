#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
using namespace std;

int main(){
 multimap<string, int> m;

m.emplace("tv", 90);
m.emplace("tv", 90);
m.emplace("tv", 90);

m.erase(m.find("tv"));
m.emplace("frige", 30);
m.emplace("watch", 10);
m.emplace("ashingmchin", 100);

 for(auto val:m){
     cout<<val.first<<" "<<val.second<<endl;
 }



 
}