#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector<int> vec;
     cout<<"size="<<vec.size()<<endl;

     vec.push_back(90);
     vec.push_back(23);
     vec.push_back(56);

     cout<<"after push back size="<<vec.size()<<endl;
     cout<<"vector value="<<vec[1]<<endl;

     
     for(int val :vec){
          cout<<val<<endl;
     }
     

}