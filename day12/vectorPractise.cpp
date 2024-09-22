#include <iostream>
#include<vector>
using namespace std;

int main(){
     // int a[2]={3,5};
     // cout<<a[1];
     // cout<<a[0];

     vector <int> abcd {2,8,5,9};
     // cout<<abcd[3];
     // cout<<abcd[1];
     // cout<<"size of abcd before push back"<<abcd.size()<<endl;
     // abcd.push_back(5);
     abcd.push_back(89);

     // cout<<abcd;
     // for (int i = 0; i <abcd.size(); i++)
     // {
     //      cout<<abcd[i]<<" ";
     // }

          for(int learn:abcd){
               cout<<learn<<" ";
          }


     // cout<<"size of abcd AFTER push back"<<abcd.size()<<endl;
     
//     abcd.pop_back();
     // cout<<"size of abcd AFTER POP back"<<abcd.size()<<endl;
     //  for (int i = 0; i <abcd.size(); i++)
     // {
     //      cout<<abcd[i]<<" ";
     // }
     // cout<<endl;
     // cout<<abcd.front();
     // cout<<endl;
     // cout<<abcd.back();
     // cout<<endl;
     // cout<<abcd.at(3);


// ---------char----------
vector <char> CharHU {'a','t','y','f','b'};
cout<<endl;
// cout<<CharHU[3];

for(char forLrn : CharHU){
cout<<forLrn<<" ";
}


}