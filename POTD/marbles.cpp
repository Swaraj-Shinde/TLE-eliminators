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
        int n;
        cin>>n;
        if(n==1)
        {
            int elem;
            cin>>elem;
            cout<<2<<"\n";
        }
        else
        {
            int c[n];
            map<int,int> mp;
            set<int> s;
            for(int i=0;i<n;i++)
            {
                cin>>c[i];
                mp[c[i]]++;
                s.insert(c[i]);
            }
            if(s.size()==1) //only one number in whole array
            {
                cout<<1<<"\n";
            }
            else
            {
                int count_1=0;
                for(auto elem : s)
                {
                    if(mp[elem]==1)
                    {
                        count_1++;
                    }
                }

                //now we will calculate score
                //1 count elem will gain 2 pts, rest will gain 1 pt
                int score=0;
                if(count_1%2==0)
                {
                    score+=count_1/2*2;
                }
                else
                {
                    score+=(count_1/2+1)*2;
                }
                score+=s.size()-count_1;
                cout<<score<<"\n";
            }
        }
    }
    return 0;
}