#include <iostream>
using namespace std;

int main(){
     int num[]={45,78,1,15,12};
     int size=5;

     int smallest=INT8_MAX;

     for (int i = 0; i <=size; i++)
     {
          if (num[i]<=smallest)
          {
               smallest = num[i];
          }

          // smallest=min(num[i], smallest); //this is shortcut of find smallest num btwn two
     }
     cout<<"smallest number is="<<smallest;
}