#include <iostream>
#include <string>
using namespace std;

class student{
     public:
     string name;

     student(){
          cout<<"non paramiterized \n";
     }
     student(string name){
          this->name=name;
          cout<<"parametrizex\n";
     }
};


int main(){
  student s1("hello");

     return 0;

}