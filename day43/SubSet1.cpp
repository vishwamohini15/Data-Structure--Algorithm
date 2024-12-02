#include<iostream>
#include<vector>
using namespace std;

void printsubSet(vector<int>&arr, vector<int> &ans, int i){
     if (i==arr.size())
     {
          for(int val: ans){
               cout<<val<<" ";
          }
          cout<<endl;
          return;
     }
     //inclusive
     ans.push_back(arr[i]);
     printsubSet(arr, ans, i+1);

     ans.pop_back();
     //exclude
     printsubSet(arr, ans, i+1);

     
}

int main(){
     vector<int> arr{1,2,3};;
      vector<int> ans;

     printsubSet(arr,ans,0);
}