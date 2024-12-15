#include<iostream>
#include <climits>
#include <vector>
#include <unordered_set>
#include <set>
using namespace std;

set<vector<int>> s;
void getallsum(vector<int>& arr, int idx, int tar, vector<vector<int>>& ans,  vector<int>& combin){
     if (idx==arr.size() || tar<0)
     {
          return;
     }

     if (tar==0)
     {
           if(s.find(combin) == s.end()){
            ans.push_back(combin);
            s.insert(combin);
        }
        return;
     }
     
     
     combin.push_back(arr[idx]);
     //single
     getallsum(arr, idx+1, tar-arr[idx], ans, combin);
     //multiple
     getallsum(arr, idx, tar-arr[idx], ans, combin);

     combin.pop_back();
     //exclusion
     getallsum(arr, idx+1, tar, ans, combin);
     

}

vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combin;

    getallsum(arr, 0, target, ans, combin);
    return ans;
    }

int main(){
     vector<int> arr {2,3,6,7};
     int target=7;
    
      vector<vector<int>> ans = combinationSum(arr, target);

    // Correctly display results
    for (const auto& combination : ans) {
        for (int val : combination) {
            cout << val << " ";
        }
        cout << endl;
    }

}