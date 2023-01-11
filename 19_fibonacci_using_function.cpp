
//19. fibonacci using function

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

//.........................................by function ..............................
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

//................another way ..............................

#include<bits/stdc++.h>
using namespace std;

void fibo(int num)
{
    int f1=0,f2=1,f3;
    cout<<f1<<" "<<f2<<" ";
    for(int i=3;i<=num;i++)
    {

        f3=f1+f2;
        cout<<f3<<" ";
        f1=f2;
        f2=f3;
    }

}

int main()
{
    int n;
    cin>>n;
    fibo(n);
    return 0;
}

