#include <iostream>
#include<vector>
using namespace std;

int majoritysum(vector<int> nums){
int n=nums.size()-1;
for (int i = 0; i <n; i++)
{
     int frq=0;
     for (int j =i+1; j < n; j++)
     {
          if (nums[i]==nums[j])
          {
               frq++;
          }
     }
     if (frq>n/2)
          {
               return frq;
          }
     
     
}

}

int main(){
     vector<int> nums={1,2,2,1,2,2,2,2,2};
     cout<<majoritysum(nums);

}


// int marurityElem(vector<int> nums){  //bruteFoce Approche
//    int  n=nums.size();
//    for(int val: nums){
//      int freq=0;
//      for(int el:nums){
//           if (el==val)
//           {
//                freq++;
//           }
//      }
//      if (freq>n/2)
//      {
//           return val;
//      }
     
//    }
// }

// int main(){
//      vector<int> nums {2,2,1,1,1,2,2};
//      cout<<marurityElem(nums);
// }
