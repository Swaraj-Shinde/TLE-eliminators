#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a5,a4;
        cin>>a1>>a2>>a4>>a5;
        int a31 = a2+a1;
        int a32=a4-a2;
        int a33=a5-a4;
        if(a31==a32 && a32==a33)
        {
            cout<<3<<"\n";
        }
        else if(a31==a32 || a32==a33 || a31==a33)
        {
            cout<<2<<"\n";
        }
        else
        {
            cout<<1<<"\n";
        }
    }
    return 0;
}