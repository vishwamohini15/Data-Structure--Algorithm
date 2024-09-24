#include <iostream>
#include<vector>
using namespace std;

int refrence(int &ptr){
ptr=56;
}

int main(){
     int abc=89;
     refrence(abc);
cout<<abc;

}