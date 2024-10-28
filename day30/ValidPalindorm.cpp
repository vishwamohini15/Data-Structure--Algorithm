#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

bool isAlphanumric(char ch){
if((ch >= '0' && ch<='9') || (tolower(ch) >= 'a' && tolower(ch) <='z')){
     return true;
}
return false;
}

bool sameStatement(string str){
     int st=0;
     int end=str.size()-1;

     while (st<end)
     {
if(!isAlphanumric(str[st])){
     st++; continue;
}
if(!isAlphanumric(str[end])){
     end--; continue;
}
if (tolower(str[st]) != tolower(str[end]))
{
     return false;
}
st++;
end--;
     }
     return true;
}

int main(){
     string arr {'A','2','#','b','e','b','2','&','a'};
     cout<<sameStatement(arr);
}