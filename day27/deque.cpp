#include <iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
     deque <int> d={8,9,0,7,6};
     for(int val: d){
          cout<<val<<" ";
     }
     cout<<endl;
     cout<<d[4]<<endl; //in list we not access like this d[4]


}