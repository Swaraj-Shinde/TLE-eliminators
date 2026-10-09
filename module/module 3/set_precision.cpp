#include<bits/stdc++.h>
using namespace std;

int main()
{
    double d= 1234.56789;
    cout<<d<<endl;
    //compiler has predefined setprecision of 2

    cout<<fixed<<setprecision(5)<<d<<endl;\
    //we can adjust manually
    return 0;
}