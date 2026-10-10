#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int even_index=0,odd_index=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==i%2)
            {
                continue;
            }
            else
            {
                if(i%2==0)
                {
                    even_index++;
                }
                else
                {
                    odd_index++;
                }
            }
        }
        if(even_index==0 && odd_index==0) //array good
        {
            cout<<0<<"\n";
        }
        else
        {
            if(even_index!=odd_index)
            {
                cout<<-1<<"\n";
            }
            else
            {
                cout<<even_index<<"\n";
            }
        }
    }
    return 0;
}