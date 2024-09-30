#include <iostream>
#include<vector>
using namespace std;

int ReverseArray(int arr[], int siz){
     int start=0;
     int end=siz-1;

 for (int i = 0; i < end; i++)
 {
     if (start<end)
     {
          swap(arr[start], arr[end]);
               start++;
               end--;
     }
     
 }
 
     
}

int main(){
     int arr[]={1,4,6,3,7,9,0,2};
     int siz=8;

     ReverseArray(arr, siz);
     for (int i = 0; i < siz; i++)
     {
          cout<<arr[i]<<" ";
     }
     
}