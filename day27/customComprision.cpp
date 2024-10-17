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

bool comprator(pair<int, int>p1, pair<int, int> p2){
     if(p1.second < p2.second) return true;
     if(p1.second > p2.second) return false;

     if(p1.first<p2.first) return true;
     else return false;
}

int main(){
     // int arr[5]={4,2,8,0,1};
     vector<int> vec{4,8,0,9,7};

     // sort(arr,arr+5);
     sort(vec.begin(), vec.end(),greater<int>());
     // sort(arr,arr+5,greater<int>());
     // for(int val:arr){
     //      cout<<val<<" ";
     // }

     // for(int val:vec){
     //      cout<<val<<" ";
     // }

     // vector<pair<int,int>> parVec={{1,2},{3,3},{2,4},{0,6}};
     vector<pair<int,int>> parVec={{3,3},{2,1},{7,3},{5,2}};

     sort(parVec.begin(), parVec.end(), comprator);

     for(auto val:parVec){
          cout<<val.first<<" "<<val.second<<endl;
     }
     cout<<endl;
}


 