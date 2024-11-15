#include <iostream>
using namespace std;

string isprime(int n){
     for (int i =2; i*i<=n; i++)
     {
          if (n%2==0)
          {
               return "non prime";
          }
     }
      return "prime";
}

int main(){
 int n=37;
 cout<<isprime(n);
 return 0;
}