#include <iostream>
#include <vector>
using namespace std;

vector<int> paiesum(vector<int>arr, int target){
int st=0;
int end=arr.size()-1;
vector<int> ans;

for (int i = 0; i <end; i++)
{
     if (arr[st]+arr[end]==target)
     {
          ans.push_back(st);
          ans.push_back(end);
     }
     if (arr[st]+arr[end]>target)
     {
          st++;
     }else
     {
          end--;
     }
}
}

int main(){
     vector<int>arr {2,7,11,15,17};
     int target=9;
       vector<int>ans=paiesum(arr,target);
     cout<<ans[0]<<" "<<ans[1];
}