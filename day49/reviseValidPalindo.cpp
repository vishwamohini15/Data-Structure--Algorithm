#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

bool isPalindrom(char ch){
     if(ch >='0' && ch<='9' || (tolower(ch)>='a' && tolower(ch)<='z')){
          return true;
     }
     return false;
}


bool ValidPalindrom(string s){
     int st=0;
     int end=s.length()-1;

     while (st<=end)
     {
          if(!isPalindrom(s[st])){
          st++; continue;

          } 
          if(!isPalindrom(s[end])) {
          end--; continue;

          }

          if (tolower(s[st])!= tolower(s[end]))
          {
               return false;    
          }
               st++;
               end--;
     }
     return true;     
}

int main(){
     string s= "A2#beb2&a";
     cout<<ValidPalindrom(s);
}