#include <iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target){
      vector<int> ans;
      int n=nums.size();
for (int i = 0; i < n; i++)
{
     for (int j =i+1; j < n; j++)
     {
          if (nums[i]+ nums[j]==target)
          {
              nums.push_back(i); 
              nums.push_back(j); 
               return ans;
          }
          
     }
     return ans;
}

}

int main(){
vector<int> nums={2,7,11,15};
int target=9;

vector<int> ans=pairsum(nums, target);
cout<<ans[0]<<" "<<ans[1]<<" ";

}