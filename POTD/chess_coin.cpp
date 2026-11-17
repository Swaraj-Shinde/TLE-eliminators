#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n,x,y;
    cin>>n>>x>>y;
    long long wxd=abs(x-1),wyd=abs(y-1),bxd=abs(n-x),byd=abs(n-y),w_steps=0,b_steps=0;
    if(x==n && y==n)
    {
        cout<<"Black";
    }
    else if(x==1 && y==1)
    {
        cout<<"White";
    }
    else if(x==1 && y==n || x==n && y==1)
    {
        cout<<"White";
    }
    else
    {
        if(x==y)
        {
            if(n%2==0)
            {
                if(wxd<n/2)
                {
                    cout<<"White";
                }
                else
                {
                    cout<<"Black";
                }
            }
            else
            {
                if(wxd<=n/2+1)
                {
                    cout<<"White";
                }
                else
                {
                    cout<<"Black";
                }
            }
        }
        else if(x==1 || y==1)
        {
            cout<<"White";
        }
        else if(x==n || y==n)
        {
            cout<<"Black";
        }
        else
        {
            if(wxd<wyd)
            {
                w_steps+=wxd;
                wyd=wyd-wxd;
                wxd=0;
            }
            else
            {
                w_steps+=wyd;
                wxd=wxd-wyd;
                wyd=0;
            }
            if(bxd<byd)
            {
                b_steps+=bxd;
                byd=byd-bxd;
                bxd=0;
            }
            else
            {
                b_steps+=byd;
                bxd=bxd-byd;
                byd=0;
            }
            w_steps+=(wyd+wxd);
            b_steps+=(byd+bxd);
            if(w_steps<=b_steps)
            {
                cout<<"White";
            }
            else
            {
                cout<<"Black";
            }
        }
    }
    return 0;
}