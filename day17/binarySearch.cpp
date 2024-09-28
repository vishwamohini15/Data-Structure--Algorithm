#include <iostream>
using namespace std;

int BinerySearch(int numb[], int siz, int target)
{
     int st = 0;
     int end = siz - 1;

     while (st <= end)
     {
          int mid = (st + end) / 2;

          if (numb[mid] < target)
          {
               st = mid + 1;
          }
          else if (numb[mid] > target)
          {
               st = mid - 1;
          }
          else
          {
               return mid;
          }
     }
     return -1;
}

int main()
{
     int number[] = {1, 2, 3, 5, 7, 9, 12};
     int siz = 7;
     int target = 12;

     cout << BinerySearch(number, siz, target);
}