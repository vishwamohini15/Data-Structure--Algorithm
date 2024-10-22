#include<iostream>
#include<vector>
using namespace std;

int main(){
     int arr[]={1,2,3,4,5};
     int n=5;
     for (int i = 0; i <n; i++)
     {
          for (int j =i+1; j < n; j++)
          {
               for (int ij = i; ij < j; ij++)
               {
                   cout<<arr[ij];
               }
                cout<<" ";              
          }
          cout<<endl;
     }
}