#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int i;
    if(n==2)
    {
        cout<<"YES";
        return 0;
    }
    else{
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
    return 0;
}