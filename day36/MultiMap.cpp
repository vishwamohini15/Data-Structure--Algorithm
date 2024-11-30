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
     multimap<string, int> m; 
     // m["mobile"]=50; // canot use square bracket............

     m.emplace("earphone", 199);
     m.emplace("earphone", 199);
     m.emplace("earphone", 199);
     m.emplace("earphone", 199);

     // m.erase("earphone");  //delete all the same name value
     m.erase(m.find("earphone"));  //find that value and delete only one 
for(auto val:m){
cout<<val.first<<" "<<val.second<<endl;
}

}