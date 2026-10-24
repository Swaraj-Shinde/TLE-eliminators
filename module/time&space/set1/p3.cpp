#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n,w;
    cin>>n>>w;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==1)
    {
        if(arr[0]<=w)
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }
    else if(n==2)
    {
        int counter=0;
        if(arr[0]<=w)
        {
            counter++;
        }
        if(arr[1]<=w)
        {
            counter++;
        }
        if(arr[0]+arr[1]<=w)
        {
            counter++;
        }
        cout<<counter;
    }
    else
    {
        int counter=0;
        set<long long> st;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=w)
            {
                st.insert(arr[i]);
            }
            else
            {
                break;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]<=w)
                {
                    st.insert(arr[i]+arr[j]);
                }
                else
                {
                    break;
                }
            }
        }
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                if(arr[i]+arr[j]+arr[k]<=w)
                {
                    st.insert(arr[i]+arr[j]+arr[k]);
                }
                else
                {
                    break;
                }
            }
        }
        cout<<st.size();
    }
    return 0;
}