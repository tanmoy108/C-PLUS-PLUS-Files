//18. print all prime numbers between 2 given numbers

#include<bits/stdc++.h>
using namespace std;

void fun(int a, int b, int c)
{
    for(int i = a;i<=b; i++)
    {
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j == 0)
            {
                c=0;
                //cout<<i<<" not prime"<<endl;
                break;
            }
        }
        if(c)
        {
            cout<<i<<" is a prime number"<<endl;
        }
        c=1;
    }
    return;
}

int main()
{
    int a,b;
    bool c = 1;
    cin>>a>>b;
    fun(a,b,c);
    return 0;
}
