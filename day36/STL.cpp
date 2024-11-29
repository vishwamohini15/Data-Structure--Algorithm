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
     vector<int> vec={1,2,3,4};
     cout<<vec.size();
     // vec.push_back(1);
     // vec.push_back(1);
     // vec.push_back(1);
     // vec.push_back(3);

     vec.emplace_back(2);

cout<<endl;
     cout<<vec.size();
cout<<endl;
     vec.pop_back();
     cout<<vec.capacity();
     for(int val:vec){
          cout<<val<<" ";
     }

     cout<<"vect at idx"<<vec[3]<<"and at "<<vec.at(3)<<endl;
     cout<<"vect at idx"<<vec.front()<<"and at "<<vec.back();

}