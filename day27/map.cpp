#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
using namespace std;

int main(){
 map<string, int> m;
 m["tv"]=50;
 m["laptop"]=100;
 m["earphone"]=80;
 m["watch"]=80;
 m["table"]=120;

//  m.insert({"camera", 890});
 m.erase("earphone");

 for(auto val:m){
     cout<<val.first<<" "<<val.second<<endl;
 }

 cout<<"count="<<m.count("watch");
 cout<<"value="<<m["tv"]<<endl;

 if(m.find("camera")!=m.end()){
     cout<<"found"<<endl;
 }else
 {
     cout<<"not found";
 }
 
}