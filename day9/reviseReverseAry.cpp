#include <iostream>
using namespace std;

int reverseArray(int arr[], int sz){
int start=0;
int end=sz-1;

for (int i = 0; i < sz; i++)
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
int arr[]={2,8,5,9,34,1};
int size=6;

reverseArray(arr, size);

for (int i = 0; i <size; i++)
{
     cout<<arr[i]<<" ";
}
}