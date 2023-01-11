//16. armstrong number

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,sum=0;
    cin>>n;
    int a=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r*r*r;
    }
    //cout<<sum;
    if(sum == a)
    {
        cout<<a<<" is an armstrong number";
    }
    else
    {
        cout<<a<<" is not an armstrong number";
    }
}
