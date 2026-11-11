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
        long long m,a,b,c;
        cin>>m>>a>>b>>c;
        long long rem_seats=0,total=0;
        if(m-a>=0)
        {
            rem_seats+=m-a;
            total+=a;
        }
        else
        {
            total+=m;
        }
        if(m-b>=0)
        {
            rem_seats+=m-b;
            total+=b;
        }
        else
        {
            total+=m;
        }
        if(rem_seats-c>=0)
        {
            total+=c;
        }
        else
        {
            total+=rem_seats;
        }
        cout<<total<<"\n";
    }
    return 0;
}