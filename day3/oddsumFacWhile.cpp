#include <iostream>
using namespace std;

int main() {
int i=1;
int n=10;

int sum=1;
while (i<=n)
{
     if (i%2 !=0)
     {
          sum +=i;

     }

     i++;

}
  cout<<sum<<" ";

cout<<endl;
}