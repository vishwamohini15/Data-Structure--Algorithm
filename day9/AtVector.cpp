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

//popback delete operation
          vec.pop_back();
     cout<<"after POP back size="<<vec.size()<<endl;

     
    //display Front value of vector
   cout<< vec.front()<<endl;
   cout<< vec.back()<<endl;

   cout<<vec.at(1)<<endl;


}