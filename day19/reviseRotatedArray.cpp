#include <iostream>
#include<vector>
using namespace std;

int rotatedArray(vector<int>arr, int target){
int st=0;
int end=arr.size()-1;

while (st<end)
{
     int  mid=st+(end-st)/2;
  if (arr[mid]==target)
  {
     return mid;
  }
  
 if (arr[st]<arr[mid])
 {
     if (arr[st]<target && arr[mid]> target)
     {
          end=mid-1;
     }
     else
     {
          st=mid+1;
     }
     
 }else{
     if (arr[mid]<target && arr[end]>target)
     {
          st=mid+1;
     }else{
          end=mid-1;
     }
     
 }
 
}

}

int main(){
     vector<int>arr {0,1,2,4,5,6,7};
     int target=2;

     cout<<rotatedArray(arr,target);
}