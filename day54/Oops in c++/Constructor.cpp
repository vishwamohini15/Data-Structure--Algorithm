#include <iostream>
#include <string>
using namespace std;

class teacher{
    
     private:
double salary;

     public:
      teacher(){
          // cout<<"hii i'm constructure"<<endl;
          dept="computer science";
     }

      teacher(string n, string s, string d, double sal){
          name=n;
          subject=s;
          dept=d;
          salary=sal;
     }

//property...//attribute
string name;
string dept;
string subject;


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
    
     // cout<<t1.dept<<endl;
     t1.getinfo();

     return 0;

}