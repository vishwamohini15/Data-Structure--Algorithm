#include<iostream>
#include <climits>
#include <vector>
using namespace std;

void printSum(int n){
     if (n==1)
     {
          cout<<"1\n";
          return;
     }
     
     cout<<n<<" ";
     printSum(n-1);
}
int main(){
printSum(40);
}