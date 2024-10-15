#include <iostream>
#include<vector>
using namespace std;

int rotateArray(int arr[], int siz){
     int st=0;
     int end=siz-1;

     for (int i = 0; i <siz; i++)
     {
          if (st<end)
          {
               swap(arr[st], arr[end]);
               st++;
               end--;
          }
     }
}

int main(){
     int arr[]={1,5,3,8,9,0,2};
     int siz=7;

     rotateArray(arr,siz);
     for (int i = 0; i <siz; i++)
     {
          cout<<arr[i]<< " ";
     }
     
}