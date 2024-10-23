#include<iostream>
#include<vector>
using namespace std;

int mounntainArray(vector<int>arr){
     int n=arr.size();
     int st=0;
     int end=n-1;
     while (st<end)
     {
          int mid=st-(end-st/2);
          if (arr[mid]> arr[mid-1] && arr[mid]>arr[mid+1]);
          {
               return arr[mid];
          }
          if (arr[mid]>arr[mid-1])
          {
               st=mid+1;
          }else
          {
               end=mid-1;
          }
     }
     
}

int main(){
     vector<int>arr{2,5,8,11,14,7,5};

     cout<<mounntainArray(arr);
}