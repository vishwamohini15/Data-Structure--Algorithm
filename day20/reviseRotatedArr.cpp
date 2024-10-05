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
        if (arr[mid]>arr[mid+1])
        {
          
        }
        
        
     }
     
}

int main(){
     vector<int>arr {0,1,2,4,5,6,7};
     int target=5;
}
