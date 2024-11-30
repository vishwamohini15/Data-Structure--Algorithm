#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <algorithm> 
using namespace std;

int main(){
//   int arr[5]={1,2,6,4,3};

//   sort(arr, arr+5); //we write arr+n because last value is not included........

//   for(int val:arr){
//      cout<<val<<" ";
//   }
//.........for vector..........

  vector<int> arr={1,2,6,4,3};
  sort(arr.begin(), arr.end());

for(int val:arr){
     cout<<val<<" ";
  }
}