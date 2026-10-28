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
        string s;
        string yes="Yes";
        cin>>s;
        int index,flag=0;
        if(s[0]=='Y')
        {
            index=1;
        }
        else if(s[0]=='e')
        {
            index=2;
        }
        else if(s[0]=='s')
        {
            index=0;
        }
        else
        {
            flag=1;//1 for no;
        }
        if(flag==0)
        {
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==yes[index])
            {
                index++;
                index=index%3;
            }
            else
            {
                flag=1;
                break;
            }
        }
    }
        if(flag==0)
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