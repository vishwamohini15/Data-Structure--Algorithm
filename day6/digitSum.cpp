#include <iostream>
using namespace std;

int sumofdigit(int num){
     int digitsum=0;

     while (num>0)
     {
         int sumNum=num % 10;
         num /=10;
          digitsum+=sumNum;
     }
     return digitsum;
}

int main() {
cout<<sumofdigit(4563);
}