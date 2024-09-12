#include <iostream>
using namespace std;

int reversAray(int arr[], int siz){
int start=0;
 int end=siz-1;

while (start<end)
{
     swap(arr[start], arr[end]);
     start++;
     end--;
}
}

int main(){
     int arry[]={2,4,6,9,12,78};
     int size=6;

          reversAray(arry, size);

     for (int i = 0; i <size; i++)
     {
          cout<<arry[i]<< " ";
     }
     
}