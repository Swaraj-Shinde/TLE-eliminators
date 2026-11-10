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
        string arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            
        }
        int row,column,flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]=='1' && flag==0)
                {
                    row=i;
                    column=j;
                    flag=1;
                }
            }
        }
        if(arr[row+1][column]=='1')
        {
            if(column==0)
            {
                cout<<"SQUARE\n";
            }
            else
            {
                if(arr[row+1][column-1]=='1')
                {
                    cout<<"TRIANGLE\n";
                }
                else
                {
                    cout<<"SQUARE\n";
                }
            }
        }
        else //always a traingle
        {
            cout<<"TRIANGLE\n";
        }
    }
    return 0;
}