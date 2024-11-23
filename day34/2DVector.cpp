#include<iostream>
#include <climits>
#include <vector>
using namespace std;

// rows=mat.size()  total num of rows is total matrix in the given
//jo v matrix h or uska jo size h uske equal rows ho jata h --mtlb jitna row usko hii size bolega
//ak row ke ander kitna element h utna hii column ho jata h 
// col=mat[i].size();           row=mat.size();

int digonalSum(int matrix[4][4], int n){
     int sum=0;

     for (int i = 0; i < n; i++)
     {
         sum +=matrix[i][i];

         if (i != n-i-1)
         {
           sum +=matrix[i][n-i-1];
         }
     }
     return sum;
}

int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6,99,87},{7,8,9}};

//     cout<<mat[0][0];
 for (int  i = 0; i < mat.size(); i++)
 {
     for (int  j = 0; j < mat[i].size(); j++)
     {
          cout<<mat[i][j]<<" ";
     }
     cout<<endl;
 }
 
}