#include <iostream>
#include<vector>
using namespace std;

void bubblesort(int arr[], int n){
for (int i = 0; i <n; i++)
{
     for (int j = 0; j <n-i-1; j++)
     {
          if (arr[j]>arr[i+1])
          {
               swap(arr[i], arr[j+1]);
          }
     }
}
}

int main(){
     int arr[]={2,4,5,1,6};
     int siz=5;

     // cout<<bubblesort;
     bubblesort(arr, siz);

     for (int i = 0; i <siz; i++)
     {
          cout<<arr[i];         
     }
     
}