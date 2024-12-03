#include<iostream>
#include <climits>
#include <vector>
#include <unordered_map>
using namespace std;

 vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> m;
        vector<int>ans;

        for(int i=0; i<arr.size(); i++){
            int first=arr[i];
            int sec=target-first;
            if(m.find(sec) != m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first]=i;
        }
        return ans;
    }

int main(){
vector<int> arr{2,7,11,15};
int target=9;
 vector<int>ans=twoSum(arr,target);
 for(int val:ans){
     cout<<val<<" ";
 }

}