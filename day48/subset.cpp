#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int>& arr,int n,vector<int>& ans){
     if (n==arr.size())
     {
         for(int val:ans){
          cout<<val<<' ';
         }
         cout<<endl;
         return;
     }

          ans.push_back(arr[n]);
          subset(arr,n+1,ans);

          ans.pop_back();
          subset(arr,n+1,ans);

     
     
}

int main(){
     vector<int> arr{1,2,3};
     vector<int> ans;
     subset(arr,0,ans);


}