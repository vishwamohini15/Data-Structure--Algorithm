#include<iostream>
#include<vector>
using namespace std;

int maximumSubArray(vector<int>arr){
     int n=arr.size();
     int maxSum=INT8_MIN;
     int cursum=0;
     for (int i = 0; i < n; i++)
     {
          cursum +=arr[i];
          maxSum=max(cursum,maxSum);
          if (cursum<0)
          {
               cursum=0;
          }
     }
     return maxSum;
}

int main(){
     vector<int> arr{3,-4,5,4,-1,7,-8};
     cout<<maximumSubArray(arr);
}