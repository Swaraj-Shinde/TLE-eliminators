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
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> v(3); //initialised with all 0s
        if(b%2==c%2)
        {
            v[0]=1;
        }
        if(a%2==c%2)
        {
            v[1]=1;
        }
        if(a%2==b%2)
        {
            v[2]=1;
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}