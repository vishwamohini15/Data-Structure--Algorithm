#include <iostream>
#include<vector>
using namespace std;

int binaryVector(vector<int> arr, int trg){
int st=0;
int end=arr.size();

while (st<end)
{
     int mid=st+(end-st)/2;
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
     vector<int> arr{2,4,5,7,8,9};
     int trg=9;
     cout<<binaryVector(arr,trg);
}