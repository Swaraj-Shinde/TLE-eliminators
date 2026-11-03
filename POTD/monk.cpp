#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long a[k];
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k);
        long long sum=0;
        for(int i=0;i<k-1;i++)
        {
            sum+=2*a[i]-1;
        }
        cout<<sum<<"\n";
    }
    return 0;
}