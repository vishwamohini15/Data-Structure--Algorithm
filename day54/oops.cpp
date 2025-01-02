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


//methods//member function
void changerdept(string newDept){
     dept=newDept;
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
     teacher t1;
     t1.name="vishwamohini";
     t1.subject="computer science";
     t1.dept="engeneering";
     t1.setsalary(67000);
     cout<<t1.name<<endl;
     cout<<t1.getsalary()<<endl;

     return 0;

}