#include <iostream>
#include<vector>
using namespace std;

int binarySerch(vector<int>arr, int target){
     int st=0;
     int end=arr.size()-1;

     while (st<=end){
     int mid=st+ (end-st)/2;

          if (target>arr[mid])
          {
              st=mid+1;
          }else if (target<arr[mid])
          {
              end=mid-1;
          }else{
               return mid;
          }
     }
     return -1;     
}

int main(){
     vector<int> arr{1, 2, 3, 5, 7, 9, 12};
     int target=2;
          // cout<<binarySerch(arr, target);

          vector<int> arr1{1, 2, 3, 5, 7, 9};
     int target1=1;
          cout<<binarySerch(arr1, target1);
}