
#include<bits/stdc++.h>
using namespace std;

void fact(int n)
{
    int a=1;
    for(int i=2;i<=n;i++)
    {
        a*=i;
    }
    cout<<a;
    return;
}


int main()
{
    int a;
    cin>>a;
    fact(a);
}

