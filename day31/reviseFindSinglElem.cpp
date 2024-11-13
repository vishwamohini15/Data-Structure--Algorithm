#include <iostream>
#include<vector>
using namespace std;

int SingleElem(vector<int>arr){
     int st=0;
     int end=arr.size()-1;
     while (st<end)
     {
          int mid=st+(end-st)/2;
          if (arr[mid] !=arr[mid-1] && arr[mid] !=arr[mid+1])
          {
               return arr[mid];
          }
          
          if (mid%2==0)
          {
               if (arr[mid]==arr[mid-1])
               {
               end=mid-1;
               }else
               {
                    st=mid+1;
               }
          }else
          {
               if (arr[mid]==arr[mid-1])
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
     vector<int>arr {2,2,6,4,4,5,5,8,8};
     cout<<SingleElem(arr);
}