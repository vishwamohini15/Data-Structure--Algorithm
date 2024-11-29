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
     deque<int> d{1,2,3,4,5}; //deque is dynamic its allowed random access
     // list<int> l{1,2,3,4,5}; //list id DDLits not allowed random access

     for(int val:d){
          cout<<val<<" ";
     }
     // cout<<l[2];
     cout<<d[2];

}