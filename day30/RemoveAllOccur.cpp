#include <iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

string removeOccurance(string s, string part){
     while (s.length()>0 && s.find(part)<s.length())
     {
          s.erase(s.find(part), part.length());          
     }
     return s;
          
}

int main(){
     string s={"daabcbaabcbc"};
     string part = "abc";
     cout<<removeOccurance(s,part);
}