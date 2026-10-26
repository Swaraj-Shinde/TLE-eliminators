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
        long long ans = 0;
        long long l,r,a;
        cin>>l>>r>>a;
        if(r%a==0) //failed on 3 3 3
        {
            long long val1=(r/a)+(r%a);
            long long val2=(r-1)/a+(r-1)%a;
            if(r-1>=l)
            {
                cout<<max(val1,val2)<<"\n";
            }
            else
            {
                cout<<val1<<"\n";
            }
        }
        else
        {
            long long val1=(r/a)+(r%a);
            long long num=r-(r%a)-1;
            long long val2=(num/a)+(num%a);
            if(num>=l)
            {
                cout<<max(val1,val2)<<"\n";
            }
            else
            {
                cout<<(r/a)+(r%a)<<"\n";
            }
        }
    }
    return 0;
}