#include <iostream>
using namespace std;

int main(){
     int num[]={45,178,89,34,12};
     int size=5;

     int maximum=INT8_MIN;

     for (int i = 0; i <=size; i++)
     {
          if (num[i]>maximum)
          {
               maximum =num[i];
          }

          maximum=max(maximum, num[i]); //this is other shortcut way to find max value
          
     }
     cout<<"maximum value is"<<maximum;
     // cout<<indexOf();
}