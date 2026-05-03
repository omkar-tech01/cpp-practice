#include<iosream>
using namespace std;
int main()
{
int n;
cin>> n;
int arr[n];

for(int i = 0; i < n; i++)
{
cin>>arr[i];
}
// find max
int max = arr[0];
for(int i = 0; i < n; i++)
{
if(arr[i] > max)
{
max = arr [i];
  }
}
// find second max
int second  = -1;
for(int i = 0; i < n; i++)
{
if(arr[i] > second && arr[i] < max)
{
second = arr[i];
  }
}
cout<<second;
return 0;
}
