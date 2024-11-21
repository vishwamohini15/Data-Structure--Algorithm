#include<iostream>
using namespace std;


int main(){
     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
     int rows=4;
     int col=3;

     matrix[2][1]=12;
     // cout<<matrix[2][1]<<endl;
     

     for (int i = 0; i <rows; i++)
     {
          for (int j = 0; j < col; j++)
          {
              cin>>matrix[i][j];
          }
     }

     for (int i = 0; i <rows; i++)
     {
          for (int j = 0; j < col; j++)
          {
              cout<<matrix[i][j]<<" ";
          }
cout<<endl;
     }
     
}