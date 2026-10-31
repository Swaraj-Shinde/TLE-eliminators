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
        if(n%2==0)
        {
            if(k%2==0)
            {
                if(k<=n)
                {
                    cout<<0<<"\n";
                }
                else
                {
                    cout<<k-n<<"\n";
                }
            }
            else
            {
                if(k<n)
                {
                    cout<<1<<"\n";
                }
                else
                {
                    cout<<k-n<<"\n";
                }
            }
        }
        else
        {
            if(k%2!=0)
            {
                if(k<=n)
                {
                    cout<<0<<"\n";
                }
                else
                {
                    cout<<k-n<<"\n";
                }
            }
            else
            {
                if(k<n)
                {
                    cout<<1<<"\n";
                }
                else
                {
                    cout<<k-n<<"\n";
                }
            }
        }
    }
    return 0;
}