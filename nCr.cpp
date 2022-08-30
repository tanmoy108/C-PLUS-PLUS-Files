//nCr
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int a=1;
    for(int i=2;i<=n;i++)
    {
        a*=i;
    }
    //cout<<a;
    return a;
}


int main()
{
    int a,b;
    cout<<"put n : ";
    cin>>a;
    cout<<"put r : ";
    cin>>b;
    int nCr = fact(a)/(fact(b)*fact(a-b));
    cout << "nCr : " << nCr;
}
