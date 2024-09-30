#include <iostream>
#include<vector>
using namespace std;

int linearSearch(int arr[], int siz, int target){
     for (int i = 0; i <siz; i++)
     {
          if (arr[i]==target)
          {
               return i;
          }
          
     }
     return -1;
}

int main(){
     int a[]={1,5,3,8,9,2};
     int siz=6;
     int trgt=2;

     cout<<linearSearch(a,siz,trgt);
}