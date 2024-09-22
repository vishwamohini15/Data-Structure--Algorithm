#include <iostream>
using namespace std;

int FindMXwater(int nums, int n){
// int r=0;
// int l=n-1;
int maxwater=0;
for (int i =0; i <n; i++)
{
     for (int j = i+1; j <n; j++)
     {
      int w = j-i;
     //  int ht= min(nums[i], nums[j]);
     //   int curwater=w*ht; 
     }
     
}
return maxwater;
}

int main(){
     int arr[]={1,8,6,2,5,4,8,3,7};
     int sz=9;

     // cout<<FindMXwater(arr,sz)<<endl;

}