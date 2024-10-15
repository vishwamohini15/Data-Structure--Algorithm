#include <iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[], int size, int target){
int st=0;
int end=size-1;
while (st<end)
{
     int mid=st+(end-st)/2;
     if (arr[mid]==target)
     {
          return mid;
     }
     if (arr[mid]<target)
     {
          st=mid+1;
     }else
     {
          end=mid-1;
     }
}

}

int main(){
     int arr[]={1,2,3,4,5,6,7};
     int size=7;
     int target=1;

     cout<<binarySearch(arr,size,target);
}