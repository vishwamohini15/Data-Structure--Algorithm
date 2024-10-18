#include <iostream>
#include <vector>
using namespace std;

int sortArray(vector<int>& arr){
     int l=0, m=0, h=arr.size()-1;
   while (m<=h)
   {
     if (arr[m]==0)
     {
          swap(arr[l], arr[m]);
          m++;
          l++;
     }else if (arr[m]==1)
     {
          m++;
     }else
     {
          swap(arr[m], arr[h]);
          h--;
     }
   }
}

int main(){
     vector<int> arr{2,0,2,1,1,0};
     sortArray(arr);
     for(int val: arr){
          cout<<val<<" ";
     }
}