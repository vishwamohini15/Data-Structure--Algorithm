#include <iostream>
using namespace std;

int decimaltobnry(int decnum){
int ans=0;
int powr=1;

while (decnum>0)
{
     int rem=decnum %2;
     decnum /=2;

     ans +=(rem*powr);
     powr *=10;
}

return ans;
}

int main(){
int  decNm=50;
cout<<decimaltobnry(decNm);

// for (int i = 0; i <=decNm; i++)
// {
//      cout<<decimaltobnry(i)<<endl;
// }

return 0;
}