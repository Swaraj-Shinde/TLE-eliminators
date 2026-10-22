#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n;
    cin>>n;
    if(n<10)
    {
        cout<<1;
    }
    else if(n<100)
    {
        int rem=n%10;
        cout<<10-rem;
    }
    else
    {
        long long nod=0;
        long long num = n;
        while(num!=0)
        {
            num=num/10;
            nod++;
        }
        long long no = pow(10,nod-1);
        cout<<no-(n%no);
    }
    return 0;
}