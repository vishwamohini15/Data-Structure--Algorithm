#include <iostream>
#include<vector>
using namespace std;

vector<int> findmajo(vector<int> nums){
   int n=nums.size();
     int fre=1;
     int ans=nums[0];
     for (int i = 1; i < n; i++)
     {
          if (nums[i]==nums[i-1])
          {
              fre++;
          }else if(nums[i]!=nums[i-1])
          {
               fre=1;
               ans=nums[i];
          }else{
                if (fre>n/2)
          {
               return ans;
          }
          }
     }
     
}

int main(){
     vector<int> nums {2,2,1,1,1};
}