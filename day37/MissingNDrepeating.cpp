#include<iostream>
#include <climits>
#include <vector>
using namespace std;

//its not right way to solve the question i'm just trying by myself
int RepeatingValue( int matrix[3][3],int n ){
  for (int i = 0; i < n; i++)
  {
     for (int j =0; j < n; j++)
     {
          if (matrix[i][j]==matrix[j][i])
          {
               return matrix[j][i];
          }
          
     }
  }
     return -1;
}

int main(){
     int matrix[3][3]={{9,1,7},{8,9,2},{3,4,6}};
      int n=3;
     cout<<RepeatingValue(matrix,n);
}