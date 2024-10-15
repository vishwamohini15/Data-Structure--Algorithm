#include <iostream>
#include<vector>
using namespace std;

int findTargetInRotatedArr(vector<int>arr, int target){
     int st=0;
     int end=arr.size()-1;

     while (st<=end)     
     {
        int mid=st+(end-st)/2;
        if (arr[mid]==target)
        {
          return mid;
        }
        if (arr[mid]<target)
        {
          end=mid-1;
        }else
        {
          st=mid+1;
        }
        
     }
     
}

int main(){
     vector<int>arr {7,6,5,4,3,2,1};
     int target=1;
     cout<<findTargetInRotatedArr(arr,target);
}
