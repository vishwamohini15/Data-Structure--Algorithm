#include<iostream>
#include <climits>
#include <vector>
using namespace std;

int recursionFact(int n){
 if (n==0)
 {
     return 1;
 }
 return n*recursionFact(n-1);

}

int main(){
cout<<recursionFact(4);
}