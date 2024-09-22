#include <iostream>
using namespace std;

int linearserch(int arr[], int sz, int trgt){
     for (int i = 0; i < sz; i++)
     {
          if (arr[i]==trgt)
          {
               cout<<i;
          }
          
     }
     return -1;
     
}

int main(){
     int arr[]={2,8,9,4,6};
     int size=5;
     int target=6;

     cout<<linearserch(arr,size,target);

}