#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int srch){
for (int i = 0; i <=size; i++)
{
     if (arr[i]==srch)
     {
          return i;
     }
}
return -1;
}

int main(){
int linernum[]={23,56,4,8,9};
int size=5;
int search=9;

cout<<linearSearch(linernum, size, search);
}