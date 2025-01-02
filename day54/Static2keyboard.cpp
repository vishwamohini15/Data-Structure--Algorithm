#include <iostream>
#include <string>
using namespace std;

class ABC{
     public:
     ABC(){
          cout<<"constructure\n";
     }

     ~ABC(){
          cout<<"destructure\n";
     }
};

int main(){
if (true)
{
   static  ABC obj;
}
cout<<"end of main funct\n";

return 0;
}