#include <iostream>
#include <string>
using namespace std;

class person{
   public:
   string name;
int age;

person(string name, int age){
     this->name=name;
     this->age=age;
}

// person(){
//      cout<<"parent constructriue"<<endl;

// }

~person(){
     cout<<"parent destructure"<<endl;

}

};

class student : public person{
public:
int rollnum;

student(string name, int age, int rollnum) : person( name, age){
     // cout<<"child constructriue"<<endl;
     this->rollnum=rollnum;
}

~student(){
     cout<<"child destructure"<<endl;

}

void getinfo(){
     cout<<"name :"<<name<<endl;
     cout<<"age :"<<age<<endl;
     cout<<"rollnum :"<<rollnum<<endl;

}
};


int main(){
     student s1("muskan",21,56);
     
     s1.getinfo();
     return 0;

}