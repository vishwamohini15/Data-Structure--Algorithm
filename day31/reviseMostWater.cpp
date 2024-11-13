#include<iostream>
#include<vector>
using namespace std;

int MostWater(vector<int>arr){
     int st=0;
     int end=arr.size()-1;
     int maxwater=0;
     while (st<end)
     {
          int mid=st+(end-st)/2;
          int h=min(arr[st], arr[end]);
          int w=end-st;
          int currwater=h*w;
          if (arr[st]>arr[end])
          {
               end--;
          }else
          {
               st++;
          }
          
          maxwater=max(currwater,maxwater);
     }
     return maxwater;
}

int main(){
     vector<int> arr{1,8,6,2,5,4,8,3,7};
     cout<<MostWater(arr);
}