#include <iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>arr, int n, int m, int maxAllowed){
int student=1;
int pages=0;
for (int i = 0; i <n ; i++)
{
     if (arr[i]+pages<=maxAllowed)
     {
         pages +=arr[i];
     }else
     {
          student++;
          pages +=arr[i];
     }
}
     return student>m ? false: true;
}

int bookAllocate(vector<int>arr, int n, int m){
int sum=0;
for (int i = 0; i <n; i++)
{
     sum +=arr[i];
}

int ans=0;
int st=0;
int end=sum;
while (st<=end)
{
     int mid=st+(end-st)/2;
     if (isValid(arr,n,m,mid))
     {
          ans=mid;
         end=mid-1;
     }else
     {
          st=mid+1;
     }
}
     return ans;
}

int main(){
     vector<int> arr {2,1,3,4};
     int n=4;
     int m=2;

     cout<<bookAllocate(arr,n,m);
}