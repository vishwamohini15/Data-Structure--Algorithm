#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>& arr, int st, int mid, int end){
vector<int> temp;
int i=st, j=mid+1;
int invcount=0;

     while (i<=mid && j<=end)
     {
          if (arr[i] <= arr[j])
          {
               temp.push_back(arr[i]);
               i++;
          }else{
               temp.push_back(arr[j]);
               j++;
               invcount +=(mid-i+1);
          }
          
     }
     while (i<=mid)
     {
          temp.push_back(arr[i]);
          i++;
     }

     while (j<=end)
     {
          temp.push_back(arr[j]);
          j++;
     }
     
     for (int idx = 0; idx <temp.size(); idx++)
     {
          arr[idx+st]=temp[idx];
     }
     
     return invcount;
}

int mergetsort(vector<int>& arr, int st, int end){
     if (st<end)
     {
          int mid=st+(end-st)/2;
         int leftinversion= mergetsort(arr, st, mid);
         int rightinversion= mergetsort(arr, mid+1, end);

          int invcount=merge(arr,st, mid, end);

          return leftinversion+rightinversion+invcount;
     }
     return 0;
     
}

int main(){
     vector<int> arr ={6,3,5,2,7};
     int ans=mergetsort(arr,0,arr.size()-1);
     cout<<"inv count="<<ans<<" ";
}