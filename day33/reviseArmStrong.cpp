#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int ArmStrong(int n){
  int copyN=n;
  int sumofCube=0;
  while (n !=0)
  {
     int dig=n%10;
      sumofCube +=dig*dig*dig;
      n=n/10;
  }
  return sumofCube==copyN;
}
int main(){
     int n=153;
     if (ArmStrong(n))
     {
          cout<<"this is ArmStrong";
     }else
     {
          cout<<"this is NOT AN Armstrong";
     }
}