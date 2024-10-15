#include <iostream>
#include<vector>
using namespace std;

int findSinglElem(vector<int>a){
     int n=a.size();
     int st=0;
     int end=a.size()-1;

     while (st<=end)
     {
          int mid=st+(end-st)/2;
          if(mid==0 && a[0] != a[1])return a[mid];
          if(mid==n-1 && a[n-1] != a[n-2]) return a[mid];
          if(a[mid]!=a[mid-1] && a[mid]!=a[mid+1]) return a[mid];
          if (mid%2==0)
          {
               if (a[mid-1]==a[mid])
               {
                    end=mid-1;
               }else
               {
                    st=mid+1;
               }
          }else
          {
               if (a[mid-1]==a[mid])
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
     vector<int> arr{1,1,2,2,9,3,3,4,4,5,5,8,8};
     cout<<findSinglElem(arr);
}