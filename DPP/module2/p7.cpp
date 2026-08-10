#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    int n,i,j,flag=0;
    cin>>n;
    long long a[n];
    long long b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                a[j]=0;
                flag++;
                break;
            }
        }
    }
    if(flag==n)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}