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
     teacher t2;

     t1.name="vishwamohini";
     t1.setsalary(67000);
     cout<<t1.dept<<endl;

     return 0;

}