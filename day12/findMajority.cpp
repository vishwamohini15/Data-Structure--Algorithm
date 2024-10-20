#include <iostream>
#include<vector>
using namespace std;

int marurityElem(vector<int> nums){  //bruteFoce Approche
   int  n=nums.size();
   for(int val: nums){
     int freq=0;
     for(int el:nums){
          if (el==val)
          {
               freq++;
          }
     }
     if (freq>n/2)
     {
          return val;
     }
     
   }
}

int main(){
     vector<int> nums {2,2,1,1,1,2,2};
     cout<<marurityElem(nums);
}