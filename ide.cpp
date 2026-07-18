#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  int m,i,count=0;
  cin>>n>>m;
  int a[n+1],b[n];
for(i=1;i<=n;i++)
{
    cin>>a[i];
}
for(i=1;i<n;i++)
{
    cin>>b[i];
}
for(i=1;i<n;i++)
{
   count++;

    if((a[i]+1+a[i+1])%m==b[i])
    {
      cout<<count;
      return 0;
    }
}
cout<<"0";
  return 0;
}