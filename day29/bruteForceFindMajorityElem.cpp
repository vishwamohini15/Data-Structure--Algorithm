#include<iostream>
#include<vector>
using namespace std;

int findMajority(vector<int>nums){
     int n=nums.size();
     for (int i =0; i <n; i++)
     {
          int freq=1;
          for (int  j =i+1; j < n; j++)
          {
               if (nums[i]==nums[j])
               {
                    freq++;
               }
               if (freq>n/2)
               {
                    return nums[i];
               }
               
               
          }
          
     }
     
}

int main(){
     vector<int>nums{1,2,1,2,1,1,2,2,2,2};
     cout<<findMajority(nums);
}