#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int reverseNumber(int n){
     int revNum=0;
     while (n !=0)
     {
          int dig=n%10;
          if (revNum>INT8_MAX/10 && revNum<INT32_MIN/10)
          {
               return 0;
          }
          revNum =revNum*10+dig;
          
          n=n/10;
     }
     return revNum;
}

int main(){
     int n=123;

     cout<<reverseNumber(n);
}