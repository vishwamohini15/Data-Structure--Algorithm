#include <iostream>
using namespace std;
double powerxn(double x, long n, double ans)
{
     if (n == 0)
          return 1.0;
     if (x == 0)
          return 0.0;
     if (x == 1)
          return 1.0;
     if (x == -1 && n % 2 == 0)
          return 1.0;
     if (x == -1 && n % 2 != 0)
          return -1.0;

     long binaryform = n;

     if (n < 0)
     {
          x = 1 / x;
          binaryform = -binaryform;
     }

     ans = 1;

     while (binaryform > 0)
     {
          if (binaryform % 2 == 1)
          {
               ans *= x;
          }
          x *= x;

          binaryform /= 2;
     }
     return ans;
}

int main()
{
     double x = 2.00000;
     long n = 10;
     double ans;

     cout << powerxn(x, n, ans) << endl;
}