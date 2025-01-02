#include <iostream>
#include <string>
using namespace std;

class teacher{
    
     private:
double salary;

     public:
     //property...//attribute
string name;
string dept;
string subject;


      teacher(string name, string subject, string dept, double salary){
         this-> name=name;
         this-> subject=subject;
         this-> dept=dept;
         this-> salary=salary;
     }

     teacher (teacher &origobj){ //cusotm copy constricture
          cout<<"im custom copy constructure"<<endl;
          this->name=origobj.name;
          this->dept=origobj.dept;
          this->subject=origobj.subject;
          this->salary=origobj.salary;

          cout<<"im custom down copy constructure"<<endl;

     }


//methods//member function
void changerdept(string newDept){
     dept=newDept;
}

void getinfo(){
     cout<<"name:"<<name<<endl;
     cout<<"subject:"<<subject<<endl;

}

//setter
void setsalary(double s){
     salary=s;
}
//getter
double getsalary(){
     return salary;
}
};



int main(){
     teacher t1("vishwamohini","c++","computer science",70000);
     // t1.getinfo();

     teacher t2(t1); //default copy constructure
     t2.getinfo();

     return 0;

}