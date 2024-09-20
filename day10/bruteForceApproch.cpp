#include <iostream>
using namespace std;

int main(){
int n=5;
int arr[7]={3,-4,5,4,-1,7,-8};

int maxsum=INT8_MIN;

for (int st = 0; st<n; st++)
{
     int cursum=0;
for (int end = st; end <n; end++)
{
     cursum +=arr[end];
     maxsum =max(cursum, maxsum);
}
}
cout<<"max of subarray is="<<maxsum<<endl;
return 0;
}