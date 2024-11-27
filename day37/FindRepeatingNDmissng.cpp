#include<iostream>
#include <climits>
#include <vector>
#include <unordered_set>
using namespace std;
//find sum of 1ton n*(n+1)/2
//1 to nsqr2 sum nsqr2 * (nsqr2+1) /2
//a=9 that is repeating value and b=5 that is missing value 
//** expectedsum+ a-b=acctualsum ****/ so (b=expsum=a-actualsum)
// expectedsum of 1 to 9=45 but becuse of missing 5 and adding repeating value9 is adding so that acctual sum is=49
 vector<int> findMissingAndRepeatedValues(vector<vector<int>>& matrix) {
     int n=matrix.size();
         unordered_set<int> s;
         vector<int>ans;
         int a, b;
          int expsum=0, acctulsum=0;

         for (int i = 0; i < n; i++)
         {
          for (int j = 0; j < n; j++)
          {
               acctulsum +=matrix[i][j];
               if (s.find(matrix[i][j]) != s.end())
               {
                    a=matrix[i][j];
                    ans.push_back(a);
               }
               s.insert(matrix[i][j]);
          }
          
         }
         expsum= (n*n)*(n*n+1)/2;
         b=expsum+a-acctulsum;
          ans.push_back(b);

          return ans;
}
int main(){
     vector<vector<int>> matrix={{9,1,7},{8,6,2},{3,4,6}};
     vector<int>ans=findMissingAndRepeatedValues(matrix);
     for(int val:ans){
          cout<<val<<",";
     }
}
