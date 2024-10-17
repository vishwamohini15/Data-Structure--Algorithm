#include <iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
     list <int> l={8,9,0,7,6};
     // l.emplace_back(5);
     // l.push_back(1);
     // l.push_front(4);
     // l.push_front(3);
     // l.push_back(2);

     // l.pop_back();
     // l.pop_front();
     for(int val: l){
          cout<<val<<" ";
     }



}