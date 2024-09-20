#include <iostream>
using namespace std;

int main(){
int n=5;
int arr[4]={2,7,11,15};

for (int i = 0; i < n; i++)
{
     for (int j =i+1; j <n; j++)
     {
         cout<<arr[j];
     }
     cout<<endl;

}

}