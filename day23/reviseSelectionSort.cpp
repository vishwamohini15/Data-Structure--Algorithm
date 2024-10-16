#include <iostream>
#include<vector>
using namespace std;

void SelectionSort(int arr[], int n){
     for (int i = 0; i <n-1; i++)
     {
          int smallestidx=i;
          for (int j =i+1; j <n; j++)
          {
              if (arr[j]<arr[smallestidx])
              {
               smallestidx=j;
              }
          }
          swap(arr[i], arr[smallestidx]);          
     }
     
}

int main(){
     int arr[]={2,7,0,9,3,5};
     int n=6;

     SelectionSort(arr, n);
     for (int i = 0; i < n; i++)
     {
          cout<<arr[i]<<" ";
     }
     
}