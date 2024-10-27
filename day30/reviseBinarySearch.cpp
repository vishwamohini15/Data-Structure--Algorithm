#include <iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[], int sz, int trg){
int st=0;
int end=sz-1;

while (st<end)
{
     int mid=(st+end)/2;
     if (arr[mid]<trg)
     {
          st=mid+1;
     }else if (arr[mid]>trg)
     {
         end=mid-1;
     }else
     {
          return mid;
     }

}
}

int main(){
     int arr[]={1,3,5,6,8,9};
     int siz=6;
     int targt=9;

     cout<<binarySearch(arr,siz,targt);
}