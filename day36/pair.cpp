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
     // pair<int, char> p{1,'k'};
     //pair of pair............
     // pair<int, pair<int, char>> p{2,{1,'k'}};
     // cout<<p.first<<endl;
     // cout<<p.second.first<<endl;
     //vector of pair..........
     vector<pair<int, int>> vec={{1,2},{2,3},{3,4}};
     //main use of push back and implesh back............
     vec.push_back({7,8});
     vec.emplace_back(9,0); //no need to add extra currly bracket
     for(pair<int, int> p:vec){
          cout<<p.first<<","<<p.second<<endl;
     }


}