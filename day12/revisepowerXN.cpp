#include <iostream>
using namespace std;

double findpower(double x, long n, double ans){
     ans=1;
     int binaryform=n;

     if (n<0)
     {
          x=1/x;
          binaryform=-binaryform;
     }

     while (binaryform>0)
     {
          if (binaryform % 2== 1)
          {
               ans *=x;

          }
               x *=x;

          binaryform /=2;
          
     }
     return ans;
     
}

int main(){
     int x=2.00000;
     int n=-2;
     int ans;

     cout<<findpower(x,n,ans)<<endl;
}