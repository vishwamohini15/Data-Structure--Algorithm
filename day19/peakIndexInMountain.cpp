#include <iostream>
#include<vector>
using namespace std;

int peakMountain(vector<int>arr){
int st=1;
int end=arr.size()-2;

while (st<end)
{
     int mid=st+(end-st)/2;
     if (arr[mid]>arr[mid-1] && arr[mid]> arr[mid+1])
     {
          return mid;
     }
     else if (arr[mid]>arr[mid-1])
     {
          st=mid+1;
     }
     else
     {
          end=mid-1;     
     }
     
}
// return -1;

}
int main(){
     // vector<int>arr {0,3,8,9,5,2};
     // cout<<peakMountain(arr);

      vector<int>arr {0,1,10,5,2};
     cout<<peakMountain(arr);

     
     
}