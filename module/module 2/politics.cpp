#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        char arr[n][k];
        int counter=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=1;i<n;i++)
        {
            int flag=0;
            for(j=0;j<k;j++)
            {
                if(arr[i][j]!=arr[0][j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}