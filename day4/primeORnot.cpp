#include <iostream>
using namespace std;

int main() {
int r=10;
bool isprime=true;

for (int i = 2; i*i<=r; i++)
{
    if (r%i==0)
    {
        isprime=false;
        break;
    }
    
}
if (isprime==true)
{
    cout<<"haa prime h ";
}else{
    cout<<"not prime";
}

}