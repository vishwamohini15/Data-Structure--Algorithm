#include<iostream>
using namespace std;

int linearSearch(int matrix[4][3],int rows, int col, int target){
    
for (int i = 0; i <rows; i++)
{
     for (int j = 0; j <col; j++)
     {
          if (matrix[i][j]==target)
          {
               return true;
          }
          
     }
     
}


}

int main(){
      int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
     int rows=4;
     int col=3;
     int target=19;
     cout<<linearSearch(matrix,rows,col,target);
}