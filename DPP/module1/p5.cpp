#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char o;
    cin>>a>>o>>b;
    if(o=='=')
    {
     if(a==b)
     {
        cout<<"Right";
        return 0;
     }
    }
    else if(o=='>')
    {
     if(a>b)
     {
        cout<<"Right";
        return 0;
     }
    }
    else
    {
     if(a<b)
     {
        cout<<"Right";
        return 0;
     }
    }
    cout<<"Wrong";
    return 0;
}