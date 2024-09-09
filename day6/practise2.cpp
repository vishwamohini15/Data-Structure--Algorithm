#include <iostream>
using namespace std;

void printhello(){
     cout<<"hello hyy"<<endl;
}

int sumNumber(int a, int b){
int s=a+b;
return s;
}

int main() {
printhello();

cout<<"sum of two num is="<<sumNumber(2,4)<<endl;
printhello();

}