#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        x=a;
        y=b;
        z=c;
    }
    else if(b>a && b>c)
    {
        x=b;
        y=a;
        z=c;
    }
    else
    {
        x=c;
        y=a;
        z=b;
    }

    if(x*x == y*y + z*z)
    {
        cout<<"pythagorean triplet...";
    }
    else
        cout<<"not pythagorean triplet..";

}
