#include <iostream>
#include<vector>
using namespace std;

vector<int> productofArray(vector<int>nums){
   vector<int>ans(nums.size(), 1);

for (int i = 0; i < nums.size(); i++)
{
     int product=1;
     for (int j = 0; j <nums.size(); j++)
     {
          if (i != j)
          {
               ans[i] *=nums[j];
          }
          
     }
}

return ans;
}

int main(){
     vector<int> nums {1,2,3,4};
    vector<int> ans=productofArray(nums);


     for(int val : ans){
          cout<<val<<",";
     }

     
     
}