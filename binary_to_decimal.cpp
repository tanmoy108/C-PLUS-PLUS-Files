#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bin,last=0,i=0,sum=0;
    cout<<"enter binary number: ";
    cin>>bin;

    while(bin>0)
    {
        last = bin%10;
        last = last * pow(2,i);
        sum+=last;
        ++i;
        bin=bin/10;
    }
    cout<<"decimal number: "<<sum;
}
