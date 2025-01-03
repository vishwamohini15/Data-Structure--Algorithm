#include<iostream>
#include <climits>
#include <vector>
using namespace std;

bool SearchInRow(vector<vector<int>>& matrix, int target, int row ){
     int n=matrix[0].size();
    int st=0;
    int end=n-1;
    while (st<=end)
    {
     int mid=st+(end-st)/2;
     if (target==matrix[row][mid])
     {
          return true;
     }
     else if (target>matrix[row][mid])
     {
          st=mid+1;
     }
     else
     {
         end=mid-1;
     }
    }
        return false;     
}

bool SearchInMatrix(vector<vector<int>>& matrix, int target){
     int m=matrix.size();
     int n=matrix[0].size();
     int stRow=0;
     int endRow=m-1;

     while (stRow<=endRow)
     {
         int midrow=stRow+(endRow-stRow)/2;
         if (target>=matrix[midrow][0] && target<=matrix[midrow][n-1]) {
           return SearchInRow(matrix, target, midrow);
         }
         else if (target>=matrix[midrow][n-1])
         {
           stRow=midrow+1;
         }
         else
         {
           endRow=midrow-1;
            
         }
     }
      return false;

}

int main(){
     vector<vector<int>> matrix{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
     int target=16;
      cout<<SearchInMatrix(matrix,target);
}