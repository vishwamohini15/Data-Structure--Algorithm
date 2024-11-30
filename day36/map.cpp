#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <algorithm> 
using namespace std;

int main(){
     map<string, int> m; //map sorting the key in accending order.........
     m["mobile"]=50;
     m["tv"]=90;
     m["laptop"]=101;

     m.insert({"camera", 99});
     m.emplace("earphone", 199);
     m.erase("tv");
for(auto val:m){
cout<<val.first<<" "<<val.second<<endl;
}
cout<<"count="<<m.count("camera")<<endl;

if (m.find("camera") != m.end())
{
     cout<<"found";
}else
{
          cout<<"NOT found";

}


}