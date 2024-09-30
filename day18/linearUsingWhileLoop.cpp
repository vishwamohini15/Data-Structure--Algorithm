#include <iostream>
#include<vector>
using namespace std;

int linearWhile(int arr[], int siz, int trg){
     int s=0;
     int end=siz-1;
     while (s<end)
     {
          if (arr[s]==trg)
          {
              return s;

          }
          s++;
     }
     return -1;
}

int main(){
     int ab[]={1,2,3,7,4,9,8};
     int siz=7;
     int target=8;

     cout<<linearWhile(ab, siz, target);

}