#include <iostream>
using namespace std;

int sumFUN(int n){
int sum=1;

for (int i = 1; i <=n; i++)
{
     sum *=i;
}
return sum;

}

int main() {
cout<<sumFUN(4);
}