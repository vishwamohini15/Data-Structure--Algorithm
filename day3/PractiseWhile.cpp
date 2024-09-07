#include <iostream>
using namespace std;

int main() {
int a=9;
int b=1;
int sumwhile=1;

while (b<=a)
{
     if (b%2 !=0)
     {
    sumwhile +=b;
     }
    b++;
}
cout<<sumwhile<<" ";

}