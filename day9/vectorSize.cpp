#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector<char> vec= {'a', 'b','c','f'};
     cout<<"size="<<vec.size()<<endl;
     
     for(char val :vec){
          cout<<val<<endl;
     }
     

}