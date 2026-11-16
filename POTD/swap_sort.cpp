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
        long long n;
        cin>>n;
        long long arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int twice_greater=0;
        while(twice_greater!=1)
        {
            twice_greater=1;
            for(int i=1;i<=n/2;i++)
        {
            if(arr[i]>arr[2*i])
            {
                arr[i]=arr[i]+arr[2*i];
                arr[2*i]=arr[i]-arr[2*i];
                arr[i]=arr[i]-arr[2*i];
            }
        }
        for(int i=1;i<=n/2;i++)
        {
            if(arr[i]>arr[2*i])
            {
                twice_greater=0;
            }
        }
        }
        int flag=0;
        for(int i=1;i<=n-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                continue;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}