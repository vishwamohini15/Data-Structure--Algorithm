#include<iostream>
#include<vector>
using namespace std;
int mostWater(vector<int>arr){
     int n=arr.size();
     int maxwater=0;
     for (int i = 0; i < n; i++)
     {
          for (int j =i+1; j <n; j++)
          {
               int width=j-i;
               int height=min(arr[i], arr[j]);
               int curwater=width*height;
               maxwater=max(curwater,maxwater);
          }
     }
          return maxwater;     
}

int main(){
     vector<int>arr{1,8,6,2,5,4,8,3,7};
     cout<<mostWater(arr);
}