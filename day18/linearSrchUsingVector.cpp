#include <iostream>
#include<vector>
using namespace std;

int linearVector(vector<int> arr, int trget){
for (int i = 0; i < arr.size(); i++)
{
     if (arr[i]==trget)
     {
          return i;
     }
     
}
return -1;
}


int main(){
     vector<int> arr{1,5,7,8,9,3};
     int target=1;

     cout<<linearVector(arr,target);
}