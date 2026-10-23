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
        int n,k;
        cin>>n>>k;
        int flag1=0,flag2=0;
        while(n--)
        {
            int l,r;
            cin>>l>>r;
            if(l==k)
            {
                flag1=1;
            }
            if(r==k)
            {
                flag2=1;
            }
        }
        if(flag1==1 && flag2==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}