
//fibonacci

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,f1=0,f2=1,f3,c=0;
    cin>>a;

    while(c<a)
    {
        cout<<f1<<" ";
        f3=f1+f2;
        f1=f2;
        f2=f3;
        ++c;
    }
}

//.........................................by function 
#include<bits/stdc++.h>
using namespace std;

void fibo(int a)
{
    int f1=0,f2=1,f3,c=0;
     while(c<a)
    {
        cout<<f1<<" ";
        f3=f1+f2;
        f1=f2;
        f2=f3;
        ++c;
    }
}

int main()
{
    int a;
    cin>>a;
    fibo(a);
}
