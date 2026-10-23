#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    string t;
    cin>>t;
    int x_coord=0,y_coord=0;
    char dixn='e';
    for(int i=0;i<t.length();i++)
    {
        if(t[i]=='S')
        {
            if(dixn=='e')
            {
                x_coord++;
            }
            else if(dixn=='s')
            {
                y_coord--;
            }
            else if(dixn=='w')
            {
                x_coord--;
            }
            else
            {
                y_coord++;
            }
        }
        else
        {
            
            if(dixn=='e')
            {
                dixn='s';
            }
            else if(dixn=='s')
            {
                dixn='w';
            }
            else if(dixn=='w')
            {
                dixn='n';
            }
            else
            {
                dixn='e';
            }
        }
    }
    cout<<x_coord<<" "<<y_coord;
    return 0;
}