#include <iostream>
using namespace std;

int sumBinary(int numb){
     int sum=0;
       int pow=1;

     while (numb>0)
      {
     int rem=numb % 2;
     numb /=2;

     sum +=(rem*pow);
     rem *=10;

     }
     return sum;
}


int main(){
// int decnum=10;
cout<<sumBinary(50);
return 0;
}