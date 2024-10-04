#include <iostream>
#include<vector>
using namespace std;

int findElem(vector<int> a){
     int n=a.size();
if(n==1) return a[0];

int st=0;
int end=n-1;

while (st<=end)
{
 int mid=st+ (end-st)/2;
 if(mid==0 && a[0] != a[1]) return a[mid];
 if(mid==n-1 && a[n-1] != a[n-2]) return a[mid];
 if(a[mid]!= a[mid-1] && a[mid] != a[mid+1]) return a[mid];

 if (mid%2 ==0)
 {
     if (a[mid]==a[mid-1])
     {
          end=mid-1;
     }else
     {
          st=mid+1;
     }
 }else{
     if (a[mid]==a[mid-1])
     {
          st=mid+1;
     }else
     {
          end=mid-1;
     }
 }
//  return -1;

}
}

int main(){
     vector<int> arr {1,1,3,3,4,4,0,8,8};

     cout<<findElem(arr);
}