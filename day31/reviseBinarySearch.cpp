#include <iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

int BinarySearch(int arr[], int size, int target){
     int st=0;
     int end=size-1;
     for (int i = 0; i <size; i++)
     {
          int mid=st+(end-st)/2;
          if (arr[mid]==target)
          {
               return mid;
          }
          if (arr[mid]>target)
          {
               end=mid-1;
          }
          else
          {
               st=mid+1;
          }
     }
     
}

int main(){
     int arr[]={1,2,3,4,5,6,7,8,9};
     int size=9;
     int target=2;
     cout<<BinarySearch(arr,size,target);
}