#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<int> st;
    while(k--)
    {
        char c;
        cin>>c;
        st.insert(c);
    }
    long long counter = 0;
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        if(st.find(s[i])==st.end()) //not present in set
        {
            ans+=(counter*(counter+1))/2;
            counter=0;
        }
        else
        {
            counter++;
        }
    }
    ans+=(counter*(counter+1))/2;
    cout<<ans;
    return 0;
}