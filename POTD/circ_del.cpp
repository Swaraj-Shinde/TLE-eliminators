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
        cin>>n;
        set<int> st;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            mp[num]++;
            st.insert(num);
        }
        int freq=INT_MIN;
        for(int x : st)
        {
            if(mp[x]>freq)
            {
                freq=mp[x];
            }
        }
        cout<<n-freq<<"\n";
    }
    return 0;
}