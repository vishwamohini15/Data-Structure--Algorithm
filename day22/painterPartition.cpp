#include <iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>arr, int n, int m, int maxAllowed){
int painters=1;
int times=0;

for (int i = 0; i <n; i++)
{
     if (m>n)
     {
          return false;
     }
     if (arr[i]+times<=maxAllowed)
     {
         times +=arr[i];
     }else
     {
          painters++;
          times =arr[i];
     }
}
     return painters<=m;

}

int PaintersPartition(vector<int>arr, int n, int m){
int sum=0;
int maxval=INT8_MIN;
for (int i = 0; i <n; i++)
{
     sum+=arr[i];
     maxval=max(maxval,arr[i]);
}

int ans=0;
int st=maxval;
int end=sum;
while (st<=end)
{
     int mid=st+(end-st)/2;
     if (isPossible(arr,n,m,mid))
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
     vector<int> arr{40,30,10,20};
     int n=4;
     int m=2;

     cout<<PaintersPartition(arr,n,m);
}
