#include <iostream>
#include <vector>
using namespace std;

int main(){
     int arr[]={1,2,3};
     int n=3;
     for (int i = 0; i <=n; i++)
     {
         for (int j =i; j <=n; j++)
         {
          for (int ij = i; ij < j; ij++)
          {
               cout<<arr[ij]<<",";
          }
          
         }
          cout<<endl;         
     }
}