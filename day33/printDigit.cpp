#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int printDigit(int n){
     int count=0;
     int sum=0;

     while (n !=0)
     {
          int digit=n%10;
          // cout<<digit<<endl;
          sum +=digit;
          // count++;
          n=n/10;
     }
     cout<<count<<endl;
     cout<<sum<<endl;

}

int main(){
     int n=3568;
     printDigit(n);
     // cout<<(int)(log10(n)+1)<<endl;
}