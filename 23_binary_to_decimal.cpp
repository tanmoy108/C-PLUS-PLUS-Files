//23. binary to decimal using function

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

//.................... another way ............................

#include<bits/stdc++.h>
using namespace std;

void bintodeci (int n)
{
    int r,i=0,sum=0,last=0;
    while(n>0)
    {
        r = n%10;
        last = r*pow(2,i);
        sum+=last;
        i++;
        n=n/10;
    }
    cout<<sum;
    return;
}

int main()
{
    int n;
    cin>>n;
    bintodeci(n);
    return 0;
}
