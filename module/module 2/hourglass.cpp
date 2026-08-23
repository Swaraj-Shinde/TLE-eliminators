#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int stars=2*n-1;
    int i,j;
    for(i=1;i<=n;i++)
    {
        //spaces
        for(j=1;j<=i-1;j++)
        {
            cout<<"-";
        }
        //stars
        for(j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        stars-=2;
    }
    for(i=n-1;i>0;i--)
    {
        //spaces
        for(j=1;j<i;j++)
        {
            cout<<"-";
        }
        for(j=1;j<=stars+4;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        stars+=2;
    }
    return 0;
}