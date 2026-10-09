#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int capital = 0;
    int small=0;
    for(int i=0;i<s.length();i++)
    {
        int c = s[i];
        if(c>=65 && c<97)
        {
            capital++;
        }
        else
        {
            small++;
        }
    }
    if(capital>small)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=toupper(s[i]);
        }
        cout<<s;
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s;
    }
    return 0;
}