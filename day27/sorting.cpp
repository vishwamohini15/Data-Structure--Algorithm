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

     vector<pair<int,int>> parVec={{1,2},{3,3},{2,4},{0,6}};
     sort(parVec.begin(), parVec.end());

     for(auto val:parVec){
          cout<<val.first<<" "<<val.second<<endl;
     }
     cout<<endl;
}


 