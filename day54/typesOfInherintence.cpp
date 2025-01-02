#include <iostream>
#include <string>
using namespace std;

class student{
   public:
   string name;
int rollnum;


};

class teacher{
public:
 string subject;
 double salary;
};


class TA : public student, public teacher{

};


int main(){
    TA s1;
     s1.name="muskan";
     s1.subject="engeneering";

cout<<s1.name<<endl;
cout<<s1.subject<<endl;

     return 0;

}