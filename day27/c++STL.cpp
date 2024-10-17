#include <iostream>
#include<vector>
using namespace std;

int main(){
     vector<int> vec;
     vec.push_back(1);
     vec.push_back(4);
     vec.push_back(4);
     vec.push_back(4);
     vec.push_back(5);
     vec.emplace_back(0);
     vec.pop_back();

     for(int val:vec){
          // cout<<val<<endl;
     }
// cout<<"***";
     // cout<<vec.at(2);
     // cout<<vec[4];

cout<<"front="<<vec.front()<<endl;
// cout<<"back="<<vec.back()<<endl;

// vector<int> arr(3,12); //define size and value at same position
// for(int vau:arr){
// cout<<vau<<" ";

// }

vector<int> vec1={4,8,5};
vector<int> vec2(vec1);
for(int val:vec2){
     cout<<val<<" ";
}
}