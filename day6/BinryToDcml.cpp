#include <iostream>
using namespace std;

int DeecmltoBnry(int bnrynum){
     int ans=0;
     int pow=1;

     while (bnrynum>0)
     {
          int rem=bnrynum % 10;
          bnrynum /=10;

          ans +=(rem*pow);
          pow *=2;
     }
     return ans;
}

int main(){
int binrynum=10110;
cout<<DeecmltoBnry(binrynum);
}