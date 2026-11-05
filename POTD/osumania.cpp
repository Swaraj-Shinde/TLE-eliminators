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
        int row;
        cin>>row;
        vector<int> v;
        for(int i=0;i<row;i++)
        {
            string s;
            cin>>s;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='#')
                {
                    v.push_back(i+1);
                    break;
                }
            }
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}