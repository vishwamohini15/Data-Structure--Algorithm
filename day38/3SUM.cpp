#include<iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
int n=nums.size(); 
vector<vector<int>>ans;    
set<vector<int>> s;  //set unique triplets;   
for (int i = 0; i < n; i++)
{
     for (int j = i+1; j <n; j++)
     {
          for (int k =j+1; k < n; k++)
          {
               if (nums[i]+nums[j]+nums[k]==0)
               {
                 vector<int> trip= {nums[i], nums[j], nums[k]}  ;
                 sort(trip.begin(), trip.end());

                 if (s.find(trip)==s.end())
                 {
                    s.insert(trip);
                    ans.push_back(trip);
                 }
               }
          }
     }
}
 return ans;
}

int main(){
     vector<int>arr={-1,0,1,2,-1,-4};
//     vector<vector<int>>ans=threeSum(arr);
//      for(vector<vector<int>> val:ans){
//           cout<<val<<",";
//      }

  vector<vector<int>> ans = threeSum(arr);

    for (vector<int> val : ans) {
        for (int num : val) {
            cout << num << " ";
        }
        cout << ",";
    }
    
}