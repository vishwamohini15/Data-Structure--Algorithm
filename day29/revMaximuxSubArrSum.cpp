#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=7;
    int maxsum=INT8_MIN;
     for (int i = 0; i < n; i++)
     {
          int cursum=0;
          for (int j =i+1; j <n; j++)
          {
               cursum +=arr[j];
               maxsum=max(cursum,maxsum);
          }
          
     }
     cout<<maxsum;

}