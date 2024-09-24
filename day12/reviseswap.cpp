#include <iostream>
using namespace std;

int swapnumber(int nmbr, int siz){
     int start=0;
     int end=siz-1;
     // int start=0;
     // int end=sz-1;

     for (int st = 0; st <siz; st++)
     {
          if (start<end)
          {
               swap(nmbr[start],nmbr[end]);
          // swap(arr[start], arr[end]);

               start++;
               end--;
          }
          
     }
     
}

int main(){
     int number[]={1,7,4,6,3};
     int siz=5
}