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
        int n;
        string s;
        cin>>n>>s;
        int t=0,m=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T')
            {
                t++;
            }
            else
            {
                m++;
            }
        }
        if(t==2*m)
        {
            int tf=0,mf=0;
            int tb=0,mb=0,flag=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='T')
            {
                tf++;
            }
            else
            {
                mf++;
            }
            if(mf>tf)
            {
                cout<<"NO\n";
                flag=1;
                break;
            }
            
                if(s[n-1-i]=='T')
            {
                tb++;
            }
            else
            {
                mb++;
            }
            if(mb>tb)
            {
                cout<<"NO\n";
                flag=1;
                break;
            }
            }
            if(flag==0)
            {
                cout<<"YES\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}