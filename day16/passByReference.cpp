#include <iostream>
#include<vector>
using namespace std;

int pointers(int *ptr){
     *ptr=45;
}

int main(){
     int a=4;
     pointers(&a);
     cout<<a<<endl;
}