#include<iostream>
#include<vector>
using namespace std;

int mostqater(vector<int>arr){
     int n=arr.size();
     int st=0;
     int end=n-1;
     int maxwater=0;
     while (st<end)
     {
          int width=end-st;
          int ht=min(arr[st], arr[end]);
          int curwater=width*ht;
          if (arr[st]>arr[end])
          {
               end--;
          }else
          {
               st++;
          }
          maxwater=max(maxwater, curwater);
     }
     return maxwater;
}

int main(){
     vector<int>arr{1,8,6,2,5,4,8,3,7};
     cout<<mostqater(arr);
}