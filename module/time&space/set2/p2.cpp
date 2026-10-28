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
        vector<long long> v,copy;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        copy=v;
        sort(copy.begin(),copy.end(),greater<long long>());
        unordered_map<long long,long long> mp;
        long long num=1;
        long long counter=0;
        for(long long i=0;i<copy.size();i++)
        {
            if(counter==0)
            {
                mp[copy[i]]=num;
                counter++;
            }
            else if(counter==1)
            {
                mp[copy[i]]=-num;
                counter++;
            }
            else
            {
                num++;
                mp[copy[i]]=num;
                counter=1;
            }
        }
        long long time=0;
        for(long long i=0;i<copy.size();i++)
        {
            time+=2*(mp[copy[i]])*copy[i];
        }
        cout<<time<<"\n";
        for(long long i=0;i<v.size();i++)
        {
            cout<<mp[v[i]]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}