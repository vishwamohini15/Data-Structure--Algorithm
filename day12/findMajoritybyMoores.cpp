#include <iostream>
#include<vector>
using namespace std;

int findMajority(vector<int>nums){
     int freq=0;
     int ans=0;
     for (int i = 0; i <nums.size(); i++)
     {
          if (freq==0)
          {
               ans=nums[i];
          }
           if (ans==nums[i])
          {
               freq++;
          }else
          {
               freq--;
          }
     }
     return ans;
}

int main(){
     vector<int>nums{1,2,1,1,2,2,2};
     cout<<findMajority(nums);
}