//pascal triangle

#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int a=1;
    for(int i=2;i<=n;i++)
    {
        a*=i;
    }
    return a;
}

void pascal(int column)
{
    for(int i=0;i<=column;i++)
    {
        int nCr = fact(column)/(fact(i)*fact(column-i));
        cout<< nCr << " ";
    }
    return;
}

int main()
{
    int row;
    cout<<"put row number : ";
    cin>>row;

    for(int i =0;i<row;i++)
    {
        pascal(i);
        cout<<endl;
    }

    return 0;
}
