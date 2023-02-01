//51. Swapping by pointer

#include<bits/stdc++.h>
using namespace std;

void swapfun(int *c, int *d)
{
    int temp = *c;
    *c=*d;
    *d = temp;
    cout<<"after swap ";
}

int main()
{
    int a =3;
    int b =5;
    cout<<"before swape ";
    cout<<a<<" "<<b<<endl;
    swapfun(&a,&b);
    cout<<a<<" "<<b;
}
