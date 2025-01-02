#include<iostream>
#include <climits>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &matrix){
     int n=matrix.size();
vector<int>ans;
unordered_set<int> s;
int acctulSum=0;
int expectsum=0;
int a,b;

for (int i = 0; i <n; i++)
{
     for (int j = 0; j < n; j++)
     {
          acctulSum +=matrix[i][j];
          if (s.find(matrix[i][j]) != s.end())
          {
               a=matrix[i][j];
               ans.push_back(a);
          }
          s.insert(matrix[i][j]);
     }
     
}
expectsum=(n*n)*(n*n+1)/2;
b=expectsum+a-acctulSum;
ans.push_back(b);

return ans;

}

int main(){
     vector<vector<int>> matrix={{9,1,7},{8,6,2},{3,4,6}};
     vector<int>ans=findMissingAndRepeatedValues(matrix);
     for(int val:ans){
          cout<<val<<" ";
     }
}