// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> twoSum(vector<int> arr, int target) {
//     int n = arr.size();
//     vector<int> ans;

//     int st = 0;
//     int end = n - 1;
//     while (st < end) {
//      //    int sum = arr[st] + arr[end];
//         if (arr[st] + arr[end] == target) {
//             ans.push_back(st);
//             ans.push_back(end);
//             return ans; // Found the pair, return it
//         }
//         if (arr[st] + arr[end] < target) {
//             st++;
//         } else {
//             end--;
//         }
//     }
//     return ans; // Return empty if no pair found
// }


// int main() {
//     vector<int> arr = {2, 5, 7, 11}; // Assumed sorted input
//     int target = 9;

//     vector<int> ans=twoSum(arr, target);
// cout<<ans[0]<<" "<<ans[1]<<" ";
//     return 0;
// }
 


#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>arr, int target){
     int n=arr.size();
     vector<int> ans;

int st=0;
int end=n-1;
while (st<end)
{
      if (arr[st]+arr[end]==target)
     {
          ans.push_back(st);
          ans.push_back(end);
          return ans;
     }

     if (arr[st]+arr[end]<target)
     {
          st++;
     }else
     {
          end--;
     }
    
}
     return ans;     

}

int main(){
     vector<int>arr={2,5,7,11};
     int target=16;
     
     vector<int> ans=twoSum(arr, target);
     cout<<ans[0]<<" , "<<ans[1]<<endl;
     return 0;
}