#include <iostream>
using namespace std;

int revrsArry(int arr[], int siz){
int start=0; int end=siz-1;

for (int i = 0; i <=siz; i++)
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
     int arr[]={4,2,7,8,1,2,5};
     int size=7;

     revrsArry (arr, size);
     for (int i = 0; i <size; i++)
     {
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}