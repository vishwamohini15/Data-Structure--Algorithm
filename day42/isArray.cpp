#include<iostream>
#include <climits>
#include <vector>
using namespace std;

bool isSorted(vector<int> array, int n){
     if (n==0 || n==1)
     {
         return true;
     }
     
     return array[n-1]>=array[n-2] && isSorted(array, n-1);
}

int main(){
     vector<int> arr={1,2,3,9,4,5};
     cout<<isSorted(arr, arr.size());
}