#include <iostream>
#include<vector>
using namespace std;

int binaryFoor(int arr[], int siz, int trg){
int st=0;
int end=siz-1;

for (int i = st; i < end; i++)
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
     int arr[]={1,4,6,7,8,9};
     int siz=6;
     int trg=1;

     cout<<binaryFoor(arr,siz,trg);
}