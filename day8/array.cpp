#include <iostream>
using namespace std;

int main(){
     int marks[5]={45,78,89,34,12};
     // cout<<marks[1];
     cout<<sizeof(marks)/sizeof(int);

     for (int i = 0; i<=5; i++)
     {
          cout<<marks[i]<<endl;
     }
     
}