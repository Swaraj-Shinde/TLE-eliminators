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
        string s;
        cin>>s;
        if(s.length()<3)
        {
            cout<<0<<"\n";
        }
        else
        {
            string map="map",pie="pie";
            int n_map=0,n_pie=0;
            if(s.length()<5)
            {
                for(int i=0;i<s.length()-2;i++)
            {
                if(s[i]==map[0] && s[i+1]==map[1] && s[i+2]==map[2])
                {
                    n_map++;
                }
            }
            for(int i=0;i<s.length()-2;i++)
            {
                if(s[i]==pie[0] && s[i+1]==pie[1] && s[i+2]==pie[2])
                {
                    n_pie++;
                }
            }
            cout<<n_map+n_pie<<"\n";
            }
            else
            {
                for(int i=0;i<s.length()-4;i++)
            {
                if(s[i]==map[0] && s[i+1]==map[1] && s[i+2]==map[2] && (s[i+3]!=pie[1] || s[i+4]!=pie[2]))
                {
                    n_map++;
                }
            }
            for(int i=s.length()-4;i<s.length();i++)
            {
                if(s[i]==map[0] && s[i+1]==map[1] && s[i+2]==map[2])
                {
                    n_map++;
                }
            }
            for(int i=0;i<s.length()-2;i++)
            {
                if(s[i]==pie[0] && s[i+1]==pie[1] && s[i+2]==pie[2])
                {
                    n_pie++;
                }
            }
            cout<<n_map+n_pie<<"\n";
            }
        }
    }
    return 0;
}
