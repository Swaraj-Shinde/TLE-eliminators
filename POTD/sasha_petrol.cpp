#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int dist,capacity;
    cin>>dist>>capacity;
    if(capacity>=dist-1)
    {
        cout<<dist-1<<"\n";
    }
    else
    {
        int cost=capacity;
        cost+=((dist-capacity)*(dist-capacity+1))/2-1;
        cout<<cost<<"\n";
    }
    return 0;
}