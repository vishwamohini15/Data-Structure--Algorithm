#include <iostream>
using namespace std;

int sumAnProd(int arr[], int siz){
int sum=0;

for (int i = 0; i <siz; i++)
{
     sum +=arr[i];
     
}

return sum;
}

int main(){
     int arr[]={1,2,3,4};
     int size=4;

     cout<<sumAnProd(arr, size);
     
     
}