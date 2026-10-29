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
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long min_elem=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            long long max_elem=arr[i];
            for(int j=i+1;j<n;j++)
            {
                max_elem=max(max_elem,arr[j]);
                min_elem=min(max_elem,min_elem);
            }
        }
        cout<<min_elem-1<<"\n";
    }
    return 0;
}