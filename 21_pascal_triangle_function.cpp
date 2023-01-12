//21. pascal triangle using function

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


// ....................another way ......................

#include<bits/stdc++.h>
using namespace std;

int last(int number)
{
    int fact = 1;
    for(int i=2;i<=number;i++)
    {
        fact *= i;
    }
    //cout<<fact<<" ";
    return fact ;
}

void pas(int n, int r)
{
    int a = n-r, total; //1-0 =1
    total = last(n)/(last(a)*last(r));
    cout<<total <<" ";
    return;
}

void fun (int num)//2
{
   for(int i = 0;i<num;i++) // 0 1
   {
       int n = num-1; // n = 1
       int r = i;//r = 0
       pas(n,r);//(1,0)
   }
   return;
}

int main()
{
    int n,r,absoulate;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        fun(i);
        cout<<endl;
    }
    return 0;
}

