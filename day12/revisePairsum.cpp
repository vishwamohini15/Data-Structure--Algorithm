#include <iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int>nums, int target){
     vector <int> ans;

     for (int i = 0; i < nums.size(); i++)
     {
          for (int j =i+1; j <nums.size(); j++)
          {
            if (nums[i] + nums[j]== target)
            {
               ans.push_back(i);
               ans.push_back(j);
               return ans;

            }
            
          }
          return ans;
     }
     


}

int main(){
     vector <int> nums {2,7,11,15};
     int target=13;

vector<int> ans=pairsum(nums, target);
cout<<ans[0]<<","<<ans[1]<<" ";
}