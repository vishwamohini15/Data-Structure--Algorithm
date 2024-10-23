#include <iostream>
#include <vector>
using namespace std;

int rotatedarray(vector<int> arr)
{
     int n = arr.size();
     int st = 0;
     int end = n - 1;
     while (st < end)
     {
          if (st<=end)
          {
               swap(arr[st], arr[end]);
               st++;
               end--;
          }
     }
}

int main()
{
     vector<int> arr{1, 5, 3, 8, 9, 0, 2};
     rotatedarray(arr);
     for (int i = 0; i < arr.size(); i++)
     {
          cout <<arr[i] << " ";
     }
}
