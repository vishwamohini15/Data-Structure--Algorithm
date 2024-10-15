#include <iostream>
#include<vector>
using namespace std;

int peakElem(vector<int>arr){
     int st=0;
     int end=arr.size()-1;
     while (st<=end)
     {
          int mid=st+(end-st)/2;
          if (arr[mid]>arr[mid-1] && arr[mid]> arr[mid+1])
          {
               return arr[mid];
          }
           if (arr[mid]>arr[mid-1])
          {
               st=mid+1;
          }
          else
          {
               end=mid-1;
          }
          
     }
     
}

int main(){
     vector<int>arr{1,5,8,11,21,5,2,1};
     cout<<peakElem(arr);
}