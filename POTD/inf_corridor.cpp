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
        int n,min_range=INT_MAX;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int r,t;
            cin>>r>>t;
            if(t<=2)
            {
                min_range=min(min_range,r);
            }
            else
            {
                if(t%2==0)
                {
                    min_range=min(min_range,r+(t/2-1));
                }
                else
                {
                    min_range=min(min_range,r+(t/2));
                }
                
            }
        }
        cout<<min_range<<"\n";
    }    
    return 0;
}