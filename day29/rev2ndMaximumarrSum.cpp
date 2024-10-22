#include<iostream>
#include<vector>
using namespace std;

int maximumSum(vector<int>arr){
     int n=arr.size();
     int curwater=0;
     int maxwater=INT8_MIN;
     for (int i = 0; i <n; i++)
     {
          curwater +=arr[i];
          maxwater=max(maxwater,curwater);
          if (curwater<0)
          {
               curwater=0;
          }
     }
     return maxwater;     
}

int main(){
     vector<int>arr{3,-4,5,4,-1,7,-8};
     cout<<maximumSum(arr);
}