#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    cin>>n>>m;
    unordered_map<long long, long long> mp1,mp2;
    for(int i=0;i<n;i++)
    {
        long long ai;
        cin>>ai;
        if(mp1.find(ai)==mp1.end()) //elem not present
        {
            mp1[ai]=1;
        }
        else
        {
            mp1[ai]++;
        }
    }
    long long b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(mp2.find(b[i])==mp2.end()) //elem not present
        {
            mp2[b[i]]=1;
        }
        else
        {
            mp2[b[i]]++;
        }
    }
    for(long long i=0;i<m;i++)
    {
        if(mp1[b[i]]>=mp2[b[i]])
        {
            continue;
        }
        else
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}