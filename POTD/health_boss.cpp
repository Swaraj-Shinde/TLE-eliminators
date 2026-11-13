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
        int arr[n];
        map<int,int,greater<int>> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
            
        }
        int health=0;
        if(mp.size()==1)
        {
            auto it=mp.begin();
            if(mp[it->first]==1)
            {
                cout<<it->first<<"\n";
            }
            else
            {
                cout<<2*it->first<<"\n";
            }
        }
        else
        {
            while(mp.size()!=1)
            {
                auto it=mp.begin();
                auto left_ptr=it;
                int left_elem=left_ptr->first;
                it++;
                auto right_ptr=it;
                int right_elem=right_ptr->first;
                int left_flag=0,right_flag=0;
                while(mp[left_elem]>0 && mp[right_elem]>0)
                {
                    health+=left_elem;
                    health+=right_elem;
                    mp[left_elem]--;
                    mp[right_elem]--;
                    if(mp[right_elem]==0)
                    {
                        mp.erase(right_elem);
                    }
                    else
                    {
                        mp.erase(left_elem);
                    }
                }
            }
            //now only one element left, already once added
            //in a pair of two, now just add once
            auto it2=mp.begin();
            health+=it2->first;
            cout<<health<<"\n";
        }
        
    }
    return 0;
}