#include <iostream>
using namespace std;

int main() {
int a=10;
int oddsum=0;

for (int i = 0; i <=a; i++)
{
     if (i%2 !=0)
     {
          oddsum +=i;
     }
     
}
cout<<oddsum<<" ";

}