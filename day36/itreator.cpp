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
     vector<int> vec{1,2,3,4};
     // vector<int>::iterator it;
     // for(it=vec.begin(); it !=vec.end(); it++){
     //      cout<<*(it)<<" ";
     // }
//reveres...........
       vector<int>::reverse_iterator it;
     for(it=vec.rbegin(); it !=vec.rend(); it++){
          cout<<*(it)<<" ";
     }
   /////no need to define revere ans itreter just erite AUTO......
    for(auto it=vec.rbegin(); it !=vec.rend(); it++){
          cout<<*(it)<<" ";
     }
}