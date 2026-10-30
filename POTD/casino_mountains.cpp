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
        long long n,limit;
        cin>>n>>limit;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long counter=0,hikes=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                counter++;
            }
            else
            {
                counter=0;
            }
            if(counter==limit)
            {
                hikes++;
                counter=0;
                i++;
            }
        }
        cout<<hikes<<"\n";
    }
    return 0;
}