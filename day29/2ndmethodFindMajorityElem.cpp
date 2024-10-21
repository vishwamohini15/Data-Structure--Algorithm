#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElem(vector<int> nums){
     sort(nums.begin(), nums.end());
     int n=nums.size();
     int ans=nums[0];
     int freq=1;
     for (int i = 1; i < n; i++)
     {
          if (nums[i]==nums[i-1])
          {
               freq++;
          }else
          {
               freq--;
               ans=nums[i];
          }
          if (freq>n/2)
          {
               return nums[i];
          }
     }
}

int main(){
     vector<int> nums{1,1,2,1,2,1};
     cout<<majorityElem(nums);
}