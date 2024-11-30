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
     unordered_map<string, int> m;  //unordered map print only one value if other value(key) is similar like that and if diffrent value is there they print randomaly nt in accending or deccending like map..............

     m.emplace("earphone", 199);
     m.emplace("earphone", 80);
     m.emplace("phone", 199);
     m.emplace("earphone", 199);

for(auto val:m){
cout<<val.first<<" "<<val.second<<endl;
}

}