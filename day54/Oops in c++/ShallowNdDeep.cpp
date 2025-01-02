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

   student(student &cpyobj){
     this->name=cpyobj.name;
    cgpaPtr= new double;
     *cgpaPtr= *cpyobj.cgpaPtr;

   }

   void getinfo(){
     cout<<"name:"<<name<<endl;
     cout<<"CGPA:"<<*cgpaPtr<<endl;

   }

};


int main(){
     student s1("muskan",99.9);
     // s1.getinfo();

     student s2(s1);
     s1.getinfo();
    *(s2.cgpaPtr)=9.2;
    s1.getinfo();

    s2.name="khushi";
    s2.getinfo();
     return 0;

}