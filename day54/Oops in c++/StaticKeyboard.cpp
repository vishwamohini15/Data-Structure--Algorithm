#include <iostream>
#include <string>
using namespace std;

void fun(){
     static int x=0;  //static create a in othere plaee a variable and save in memory when function run they remember previous value and this time increament
     cout<<"x:"<<x<<endl;
     x++;
}

int main(){
fun();
fun();
fun();

return 0;
}