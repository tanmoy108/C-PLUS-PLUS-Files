//20. nCr using function
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

//..............another way................

#include<bits/stdc++.h>
using namespace std;

int fun (int num)
{
    int a=num,fact=1;
    for(int i=2;i<=a;i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int n,r,absoulate;
    cin>>n>>r;
    int a= fun(n-r);
    int b= fun(n);
    int c= fun(r);
    absoulate = b/(a*c);
    cout<<absoulate<<endl;
    return 0;
}
