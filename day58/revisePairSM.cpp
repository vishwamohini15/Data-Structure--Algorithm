#include<iostream>
#include<vector>
using namespace std;

// its not good way...........
vector<int> pairsum( vector<int> arr, int target){
      vector<int> ans;
      int n=arr.size()-1;

      for (int i = 0; i < n; i++)
      {
          for (int j =i+1; j < n; j++)
          {
               
                if (arr[i]+arr[j]==target)
               {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
               }else if (arr[i]+arr[j] !=target)
               {
                    i++;
                    j++;
               }
               
          }
      return ans;
          
      }
}

int main(){
 vector<int> nums={2,7,11,15};
int target=13;

vector<int> ans=pairsum(nums, target);
for(int val:ans){
     cout<<val<<" ";
}
}