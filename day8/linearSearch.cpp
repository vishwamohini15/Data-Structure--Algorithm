#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int trgt){

     for (int i = 0; i <=size; i++)
     {
          if (arr[i]==trgt)
          {
               return i;
          }
          
     }
     return -1;
}

int main(){
     int arr[]={45,7,67,3,9};
     int size=5;
     int target=9;

cout<<"index if the target is="<<linearSearch(arr, size, target)<<endl;
return 0;
}