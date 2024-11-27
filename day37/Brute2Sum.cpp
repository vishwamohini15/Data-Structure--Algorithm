#include<iostream>
#include <climits>
#include <vector>
using namespace std;

vector<int> twosum(vector<int>array, int target){
vector<int>ans;
 for (int i = 0; i <array.size(); i++)
 {
     for (int j = i+1; j <array.size(); j++)
     {
          if (array[i]+array[j]==target)
          {
               ans.push_back(i);
               ans.push_back(j);
          }
     }
     return ans;
 }
  return ans;
}

int main(){
     vector<int> arr{2,7,11,15};
     int target=17;
     vector<int> ans=twosum(arr, target);


     for(int val : ans){
          cout<<val<<",";
     }
}