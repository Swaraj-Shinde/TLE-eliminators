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
        char c1,c2;
        cin>>c1>>c2;;
        int ch=c1;
        for(int i=97;i<=104;i++)
        {
            char ch=i;
            if(ch==c1)
            {
                continue;
            }
            else
            {
                cout<<ch<<c2<<"\n";
            }
        }
        for(int i=1;i<=8;i++)
        {
            int ch=c2-'0';
            if(i==ch)
            {
                continue;
            }
            else
            {
                cout<<c1<<i<<"\n";
            }
        }
    }
    return 0;
}