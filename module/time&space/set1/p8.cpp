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
        int n;
        cin>>n;
        int grid[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                char c;
                cin >> c;
                grid[i][j] = c - '0';
            }
        }
        int ans=0;
        if(n%2==0)
        {
        for(int i=0;i<n/2+1;i++)
        {
            pair<int,int> p1,p2,p3,p4;
                p1.first=i;
                p1.second=i;
                p2.first=i;
                p2.second=n-1-i;
                p3.first=n-1-i;
                p3.second=n-1-i;
                p4.first=n-1-i;
                p4.second=i;
            for(int j=0;j<n-1-2*i;j++)
            {
                int count_1=0,count_0=0;
                if(grid[p1.first][p1.second+j]==1)
                {
                    count_1++;
                }
                else
                {
                    count_0++;
                }
                if(grid[p2.first+j][p2.second]==1)
                {
                    count_1++;
                }
                else
                {
                    count_0++;
                }
                if(grid[p3.first][p3.second-j]==1)
                {
                    count_1++;
                }
                else
                {
                    count_0++;
                }
                if(grid[p4.first-j][p4.second]==1)
                {
                    count_1++;
                }
                else
                {
                    count_0++;
                }
                ans+=min(count_1,count_0);
            }
        }
        cout<<ans<<"\n";
        }
        else
        {
            for(int i=0;i<n/2;i++)
        {
            pair<int,int> p1,p2,p3,p4;
                p1.first=i;
                p1.second=i;
                p2.first=i;
                p2.second=n-1-i;
                p3.first=n-1-i;
                p3.second=n-1-i;
                p4.first=n-1-i;
                p4.second=i;
            for(int j=0;j<n-1-2*i;j++)
            {
                int count_1=0,count_0=0;
                if(grid[p1.first][p1.second+j]==1)
                {
                    count_1++;
                }
                else
                {
                    count_0++;
                }
                if(grid[p2.first+j][p2.second]==1)
                {
                    count_1++;
                }
                else
                {
                    count_0++;
                }
                if(grid[p3.first][p3.second-j]==1)
                {
                    count_1++;
                }
                else
                {
                    count_0++;
                }
                if(grid[p4.first-j][p4.second]==1)
                {
                    count_1++;
                }
                else
                {
                    count_0++;
                }
                ans+=min(count_1,count_0);
            }
        }
        cout<<ans<<"\n";
        }
    }
    return 0;
}