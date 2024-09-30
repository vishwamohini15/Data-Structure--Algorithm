#include <iostream>
#include<vector>
using namespace std;

int ReverseVector(vector<int>arr){
int st=0;
int end=arr.size();

for (int i = 0; i <end; i++)
{
     if (st<end)
     {
          swap(arr[st], arr[end]);
          st++;
          end--;
     }
     
}

}

int main(){
     vector<int>arr{2,4,1,5,7,8,3,0};
     ReverseVector(arr);
     for (int i = 0; i <arr.size(); i++)
     {
          cout<<arr[i]<< ", ";
     }
    
}