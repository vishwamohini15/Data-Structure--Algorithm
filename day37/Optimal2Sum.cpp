#include<iostream>
#include <climits>
#include <vector>
using namespace std;

vector<int> twosum(vector<int>arr, int target){
int st=0;
int end=arr.size()-1;
vector<int>ans;
while (st<end)
{
     if (arr[st]+arr[end]==target)
     {
          ans.push_back(st);
          ans.push_back(end);
            return ans;
     }else if (arr[st]+arr[end]<=target)
     {
         st++;
     }else
     {
          end--;
     }
}
  return ans;
}

int main(){
         vector<int> arr{2,7,11,15};
     int target=18;
     vector<int> ans=twosum(arr, target);


     for(int val : ans){
          cout<<val<<",";
     }
}