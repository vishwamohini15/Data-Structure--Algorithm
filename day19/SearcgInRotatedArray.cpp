#include <iostream>
#include<vector>
using namespace std;

int search(vector<int>arr, int trg){
int st=0; 
int end=arr.size()-1;

while (st<=end)
{
     int mid=st+(end-st)/2;
     if (arr[mid]==trg)
     {
          return mid;
     }
     
     if (arr[st]<=mid)
     {
          if (arr[st]<=trg && trg<= arr[mid] )
          {
               end=mid-1;
          }else
          {
               st=mid+1;
          }
     }else
     {
          if (arr[mid]<=trg && trg<=arr[end])
          {
               st=mid+1;
          }else
          {
               end=mid-1;
          }
     }
}

}

int main(){
     vector<int>arr{0,1,2,4,5,6,7};
     int target=5;

     cout<<search(arr, target);
}