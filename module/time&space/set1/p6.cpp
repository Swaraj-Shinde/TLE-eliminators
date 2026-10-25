#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    long long max_amount=0;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        max_amount=max(max_amount,a[i]);
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=max_amount-a[i];
    }
    cout<<sum<<"\n";
    return 0;
}