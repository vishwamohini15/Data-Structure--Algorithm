#include <iostream>
#include <string>
using namespace std;

class parent{
     public:
    void getinfo(){
          cout<<"parent class\n";
     }

     virtual void hello(){
          cout<<"hello from parent virtual\n";
     }
};

class child: public parent{
 public:
    void getinfo(){
          cout<<"child class\n";
     }

      virtual void hello(){
          cout<<"hello from child virtual\n";
     }
};

int main(){
     child c1;
c1.hello();

}