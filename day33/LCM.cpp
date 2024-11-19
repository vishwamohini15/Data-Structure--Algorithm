#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int GCD(int a,int b){
     while (a>0 && b>0)
     {
          if (a>b)
          {
               a=a%b;
          }else
          {
               b=b%a;
          }
     }
     if(a==0) return b;
     return a;   
}

int LCM(int a,int b){
     int gcd=GCD(a,b);
     return (a*b)/gcd;
}

int main(){
     cout<<LCM(20,28);
}