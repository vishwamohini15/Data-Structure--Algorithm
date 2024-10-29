#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

bool Alphanumric(char ch){
     if((ch>=0 && ch<=9) || (towlower(ch)>='a' &&  towlower(ch)<='z')){
          return true;
     }
     return false;
}

bool ValidPalindrom(string s){
     int st=0;
     int end=s.size()-1;
     while (st<end)
     {
          if (!Alphanumric(s[st]))
          {
               st++; continue;
          }
          if (!Alphanumric(s[end]))
          {
               end--; continue;
          }
          if (towlower(s[st]) != towlower(s[end]))
          {
               return false;
          }
          st++;
          end--;
     }
          return true;     
}

int main(){
     string s= {'A','2','#','b','e','b','2','&','a'};
     cout<<ValidPalindrom(s);
}