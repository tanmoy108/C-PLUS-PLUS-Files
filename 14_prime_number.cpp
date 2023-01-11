//14. prime number

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool b=true;
    cin>>n;
    for(int i = 2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            b= false;
            cout<<"not prime";
            break;
        }
    }
    if(b)
    {
        cout<<"prime";
    }
}
