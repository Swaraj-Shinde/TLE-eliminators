#include<bits/stdc++.h>
using namespace std;

int value(char ch)
{
  if(ch=='m' || ch=='M')
  return 1;
  if(ch=='e' || ch=='E')
  return 2;
  if(ch=='o' || ch=='O')
  return 3;
  if(ch=='w' || ch=='W')
  return 4;
  else
  return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      string s;
      cin>>s;
      int flag=0;
      if(value(s[0])!=1) //not starting from m
      {
        flag=1;
      }
      else
      {
        int section = value(s[0]);
        for(int i=1;i<n;i++)
        {
          if(value(s[i])==-1)
          {
            flag=1;
            break;
          }
          else
          {
            if(value(s[i])-section==0)
            {
              continue;
            }
            else if(value(s[i])-section==1)
            {
              section = value(s[i]);
            }
            else
            {
              flag=1;
              break;
            }
          }
        }
        if(section!=4)
        {
          flag=1;
        }
      }
      if(flag==0)
      {
        cout<<"YES"<<endl;
      }
      else
      cout<<"NO"<<endl;
    }
return 0;
}