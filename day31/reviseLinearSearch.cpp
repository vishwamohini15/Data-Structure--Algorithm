#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target){
    for (int  i = 0; i < size; i++)
    {
     if (arr[i]==target)
     {
          return i;
     }
     
    }
     return -1;     
}

int main(){
     int arr[]={2,5,7,9,1};
     int size=5;
     int target=9;
     cout<<LinearSearch(arr,size,target);
}