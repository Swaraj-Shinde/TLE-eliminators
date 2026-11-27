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
        string s;
        cin>>s;
        int counter=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                i+=k-1;
            }
            else
            {
                bool flag=false;
                for(int j=i+1;j<i+k;j++)
                {
                    if(s[j]=='0')
                    {
                        flag=true;
                        break;
                    }
                }
                if(!flag) 
                {
                    counter++;
                }
                i+=k-1;
            }
        }
        cout<<counter<<"\n";
    }
    return 0;
}