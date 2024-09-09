#include <iostream>
using namespace std;
int sum(int a, int b){
int s=a+b;
return s;
}

int minofTwo(int c, int d){
if (c<=d)
{
     return c;
}else
{
     return d;
}

}

int main() {
cout<<minofTwo(4,1);

}