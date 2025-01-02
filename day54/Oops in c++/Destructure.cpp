#include <iostream>
#include <string>
using namespace std;

class student{
   public:
   string name;
   double* cgpaPtr;

   student(string name, double cgpa){
   this->name=name;
   cgpaPtr=new double;
   *cgpaPtr=cgpa;
   } 

//destructure
     ~student (){
          cout<<"hii i delete theses things\n";
          delete cgpaPtr;
     }

   void getinfo(){
     cout<<"name:"<<name<<endl;
     cout<<"CGPA:"<<*cgpaPtr<<endl;

   }

};


int main(){
     student s1("muskan",99.9);
     s1.getinfo();
     return 0;

}