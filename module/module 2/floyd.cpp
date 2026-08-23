#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j;
    int counter = 1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<counter;
            counter++;
        }
        cout<<endl;
    }
    return 0;
}