#include<bits/stdc++.h>
using namespace std;

int main()
{
    // cout<<"print in cpp\n";
    // printf("print in c\n");
    //there is a sync between c and cpp which takes time

    ios::sync_with_stdio(false);
    //it removes the sync
    //however these lines would still get printed in random order

    cout<<"print in cpp\n";
    printf("print in c\n");

    cin.tie(NULL);
    //it removes the sync b/w ip and op
    //coz in cp we give all the inputs at once
    // we dont need to wait for user to enter the ip into terminal
    //thus no need to maintain sync b/w ip and op

    //also  endl will take more time than \n so use that
    
    return 0;
}