#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int k,w;
    long long n;
    cin>>k>>n>>w;
    long long total_cost = (k*w*(w+1))/2;
    if(total_cost<=n)
    {
        cout<<0;
    }
    else
    {
        cout<<total_cost-n;
    }
    return 0;
}