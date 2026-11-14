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
        int n,k,x;
        cin>>n>>k>>x;
        int q=n/k;
        int rem=n%k;
        if(k==1)
        {
            cout<<"NO\n";
        }
        else if(k==2)
        {
            if(x==1)
            {
                if(n%2==0)
                {
                    cout<<"YES\n"<<q<<"\n";
                    for(int i=0;i<q;i++)
                    {
                        cout<<2<<" ";
                    }
                }
                else
                {
                    cout<<"NO\n";
                }           
            }
            else
            {
                cout<<"YES"<<n<<"\n";
                for(int i=0;i<n;i++)
                {
                    cout<<1<<" ";
                }
                cout<<"\n";
            }
        }
        else
        {
            if(x==1)
            {
                cout<<
            }
            
        }
    return 0;
}