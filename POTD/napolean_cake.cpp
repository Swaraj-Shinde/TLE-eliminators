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
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long ans[n]={0};
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==0)
            {
                continue;
            }
            else
            {
                if(i>=a[i])
                {  
                    fill(ans+i-a[i]+1,ans+i+1,1);
                }
                else
                {
                    fill(ans,ans+i+1,1);
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}