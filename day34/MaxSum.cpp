#include<iostream>
#include <climits>
using namespace std;


int getmaxSum(int arr[][3], int  row, int col){
int maxSum=INT_MIN;

for (int i = 0; i <row; i++)
{
     int sumofI=0;
     for (int j = 0; j < col; j++)
     {
          sumofI +=arr[j][i];
     }
     maxSum=max(maxSum, sumofI);
}
 return maxSum;
}

int main(){
     int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     int rows=3;
     int col=3;
          cout<<getmaxSum(matrix,rows,col);
     
}