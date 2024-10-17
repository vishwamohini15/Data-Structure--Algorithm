#include <iostream>
#include<vector>
using namespace std;

int main(){
     // vector<int> vec{9,0,8,4,7};
     // vec.erase(vec.begin()+2);
     // vec.erase(vec.begin()+1, vec.begin()+3);
     // vec.insert(vec.begin()+2, 100);
     // vec.clear();
     // for(int val:vec){
     //      cout<<val<<" ";
     // }
     // cout<<"size"<<vec.size()<<endl;
     // cout<<"capac"<<vec.capacity();
     // cout<<"isEmpty"<<vec.empty();
     // cout<<"begin:"<<*(vec.begin());
     // cout<<"end:"<<*(vec.end());

     vector<int> vec={9,0,8,4,7};
     // vector<int>::reverse_iterator it;
     for (auto it = vec.begin(); it !=vec.end(); it++)
     {
          cout<<*(it)<<" ";
     }

     // vector<int>::reverse_iterator reit;
     // for ( reit =vec.rbegin(); reit !=vec.rend(); reit++);
     // {
     //     cout<<*(reit)<<" ";
     // }
     
     
}