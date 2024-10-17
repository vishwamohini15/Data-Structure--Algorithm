#include <iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
//     pair<string, int> p{"vishwamohini",8};
//     cout<<p.first<<endl;
//     cout<<p.second<<endl;

//pair of pair
// pair<int, pair<char, int>> p={2, {'k', 7}};
// cout<<p.first<<endl;
// cout<<p.second.first<<endl;

//pair with vector
vector<pair<int, int>> vec={{1,1},{2,2},{3,4}};
vec.push_back({7,9}); //insert in already presented
vec.emplace_back(0,0); //in-place object create
for(pair<int, int>p:vec){
     cout<<p.first<< " "<<p.second<<endl;
}
}