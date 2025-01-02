#include <iostream>
#include <string>
using namespace std;

class parent{
     public:
    void getinfo(){
          cout<<"parent class\n";
     }
};

class child: public parent{
 public:
    void getinfo(){
          cout<<"child class\n";
     }
};

int main(){
     child c1;
// parent p1;
c1.getinfo();

}