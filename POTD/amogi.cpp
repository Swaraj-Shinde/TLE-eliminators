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
        string w;
        cin>>w;
        if(w=="us")
        {
            cout<<"i\n";
        }
        else
        {
            for(int i=0;i<w.length()-2;i++)
        {
            cout<<w[i];
        }
        cout<<"i\n";
        }
        
    }
    return 0;
}