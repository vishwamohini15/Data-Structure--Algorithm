#include<iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]== nums[i-1]) continue;

            int j=i+1, k=n-1;

            while(j<k){
             int sum=nums[i]+nums[j]+nums[k];
             if(sum<0){
                j++;
             }else if(sum>0){
                k--;
             }else{
                ans.push_back({nums[i],nums[j],nums[k]});

                      while(j < k && nums[j] == nums[j+1]) j++;
                    while(j < k && nums[k] == nums[k-1]) k--;

                j++;
                k--;
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