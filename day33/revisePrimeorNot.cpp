#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int Countprime(int n){
     vector<bool> isPrime(n+1, true);
     int count=0;
     for (int i =2; i < n; i++)
     {
          if (isPrime[i])
          {
               count++;
               for (int j =2*i; j < n; j=j+i)
               {
                   isPrime[j]=false;
               }
          }
     }
      return count;
}

int main(){
     int n=50;
     cout<<Countprime(n);
}