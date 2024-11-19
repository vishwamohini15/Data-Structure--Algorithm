#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool isArmstrong(int n){
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
     int n=111;

     if (isArmstrong(n))
     {
          cout<<"this is an armstrong number\n";
     }
     else
     {
          cout<<"this is NOT an armstrong number\n";
          
     }
     // cout<<n;
     
}



















// int isArmStrong(int n){
//      int copyN=n;
//      int sumofcube=0;
//      while (n != 0)
//      {
//           int dig=n%10;
//           sumofcube
//      }
     
// }

// int main(){
//      int n=153;
//      if (isArmStrong(n))
//      {
//          cout<<"is armstrong numbere";
//      }else
//      {
//                    cout<<"NOT armstrong numbere";
//      }
     
     
// }