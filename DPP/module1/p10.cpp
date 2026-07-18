#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int char_x_coord=0;
    int char_y_coord=0;
    int arr_x[n];
    int arr_y[n];
    for(i=0;i<n;i++)
    {
     cin>>arr_x[i]>>arr_y[i];
    }
    for(i=0;i<n;i++)
    {
      if(char_y_coord-arr_y[i]>=2)
      {
        cout<<"NO";
      }
    }

    return 0;
}