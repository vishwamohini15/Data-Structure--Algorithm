#include <iostream>
#include<vector>
using namespace std;

int inearSrch(int arr[], int size, int target){
     for (int i = 0; i < size; i++)
     {
          if (arr[i]==target)
          {
               return i;
          }
     }
     return -1;    
}

int main(){
     int arr[]={1,6,2,5,8,9,3};
     int size=7;
     int target=3;

     cout<<inearSrch(arr,size,target);
}