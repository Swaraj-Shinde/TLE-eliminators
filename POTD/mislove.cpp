#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,l,r;
    cin>>n>>l>>r;
    //min sum
    if(l>=2)
    {
        int num=1,sum=0;
        for(int i=1;i<=l;i++)
        {
            sum+=num;
            num*=2;
        }
        sum+=(n-l);
        cout<<sum<<"\n";
    }
    else
    {
        cout<<n<<" ";
    }
    //max sum
    int num=1,sum=0;
    if(r<n)
    {
        for(int i=1;i<=r;i++)
        {
            sum+=num;
            num*=2;
        }
        num=num/2;
        sum+=(n-r)*num;
        cout<<sum;
    }
    else
    {
        for(int i=0;i<n;i++)
    {
        sum+=num;
        num*=2;
    }
    cout<<sum;
    }
    
    return 0;
}