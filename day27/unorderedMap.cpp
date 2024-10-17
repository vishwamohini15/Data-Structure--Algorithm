#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
 unordered_map<string, int> m;

m.emplace("tv", 90);
m.emplace("laptop", 90);
m.emplace("mobile", 90);


 for(auto val:m){
     cout<<val.first<<" "<<val.second<<endl;
 }



 
}