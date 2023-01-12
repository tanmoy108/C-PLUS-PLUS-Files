//24. octal to decimal

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int oct,last=0,i=0,sum=0;
    cout<<"enter octal number: ";
    cin>>oct;

    while(oct>0)
    {
        last = oct%10;
        last = last * pow(8,i);
        sum+=last;
        ++i;
        oct=oct/10;
    }
    cout<<"decimal number: "<<sum;
}
