#include<bits/stdc++.h>
using namespace std;

namespace abc{
    int a = 5;
}

namespace xyz{
    int a = 10;
}
int main()
{
    int a = 15;
    cout<<a<<endl;
    cout<<abc::a<<endl;
    cout<<xyz::a<<endl;

    //there could be variables having same name
    //for different blocks of code, so to access specific variable
    //we use namespace so that uske andar wala hi access ho
    return 0;
}