#include <iostream>
using namespace std;

int ourmaxProfit(int prices[], int size,int maxprofit){
     size=6;
     int bestbuy=prices[0];
      maxprofit=0;

     for (int i =1; i<size; i++)
     {
          if(prices[i] > bestbuy){
             maxprofit= max(maxprofit, prices[i]-bestbuy);
           }
        
        bestbuy= min(bestbuy, prices[i]);
        }
        return maxprofit;
     }

int main(){
     int arr[6]={7,6,4,3,1};
     int six=6;
     int ans;
     cout<<ourmaxProfit(arr,six,ans);
}