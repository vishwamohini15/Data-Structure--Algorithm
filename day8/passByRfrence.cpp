#include <iostream>
using namespace std;

void changeArr(int arr[], int size){
     cout<<"in function"<<endl;

     for (int i = 0; i <=size; i++)
     {
          cout<<arr[i]<<endl;

          arr[i]= 2 * arr[i];

     }
     
}

int main(){
     int arr[]={2,3,4};

     changeArr(arr, 2);
     cout<<"in main function"<<endl;

     for (int i = 0; i <=2; i++)
     {
          cout<<arr[i]<<endl;;
     }
     

}