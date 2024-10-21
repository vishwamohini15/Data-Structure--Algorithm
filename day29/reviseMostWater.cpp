#include<iostream>
#include<vector>
using namespace std;

int mostWater(vector<int>arr){
     int n=arr.size();
     int maxWater=0;
     for (int st = 0; st < n; st++)
     {
     int curwater=0;
          for (int end = 0; end < n; end++)
          {
               curwater +=arr[end];
               maxWater=max(maxWater,curwater);
          }
     }
     return maxWater;     
}

int main(){
     vector<int>arr{1,8,6,2,5,4,8,3,7};
     cout<<mostWater(arr);
}