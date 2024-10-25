 #include <iostream>
#include <vector>
using namespace std;

void mergeArray(int a[],  int g, int b[],int n){
int idx=g+n-1;
int i=g-1;
int j=n-1;

while (i >=0 && j>=0)
{
     if (a[i]>=b[j])
     {
          a[idx--]=a[i--];
     }else
     {
          a[idx--]=b[j--];
     }
}
while (j>=0)
{
     a[idx--]=b[j--];
}

}

int main(){
          int arr[]={1,2,3,0,0,0};
          int m=3;
          int arr2[] = {2,5,6};
          int n=3;

          mergeArray(arr,m,arr2,n);
          for(int val:arr){
               cout<<val<<" ";
          }
}