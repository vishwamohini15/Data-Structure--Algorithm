#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector<int> vec;
     vec.push_back(9);
     vec.push_back(3);
     vec.push_back(8);
     vec.push_back(0);
     vec.push_back(1);


     cout<<vec.size()<<endl;
     cout<<vec.capacity()<<endl;


}