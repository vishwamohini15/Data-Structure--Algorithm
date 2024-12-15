#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

bool ispali(string s){
     string s2=s;
     reverse(s2.begin(), s2.end());

     return s==s2;
}

void getAllparts(string s, vector<string>& partitions, vector<vector<string>>& ans){
     if (s.size()==0)
     {
          ans.push_back(partitions);
          return;
     }
     

     for (int i = 0; i <s.size(); i++)
     {
          string part=s.substr(0, i+1);
          if (ispali(part))
          {
               partitions.push_back(part);
               getAllparts(s.substr(i+1),partitions, ans);

               partitions.pop_back();
          }
          
     }
     
}

vector<vector<string>> partitionsol(string s) {
        vector<string> partitions;
        vector<vector<string>> ans;
        getAllparts(s, partitions,ans);
        return ans;
    }

int main(){
     string s="aab";
          vector<vector<string>> solutions = partitionsol(s);
    for (const auto& solution : solutions) { // Loop through the outer vector
        for (const auto& part : solution) {  // Loop through each inner vector
            cout << part << " ";
        }
        cout << endl; // Separate partitions
    }

}