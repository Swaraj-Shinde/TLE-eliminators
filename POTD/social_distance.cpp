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
        long long n,m;
        cin>>n>>m;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n>m)
        {
            cout<<"NO\n";
        }
        else
        {
            sort(arr,arr+n);
            long long space_ptr=m-(2*arr[n-1]+1),flag=0,flag2=0;
            if(space_ptr<=0 && n!=1)
                {
                    cout<<"NO\n";
                    flag=1;
                    //now i dont want my for loop to execute
                    flag2=1;
                }
                if(flag2!=1){
            for(int i=n-2;i>=0;i--)
            {
                space_ptr-=(arr[i]+1);
                if(space_ptr<=0 && i!=0)
                {
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
            }
        }
            if(flag==0)
            {
                cout<<"YES\n";
            }
        }
    }
    return 0;
}