//50. pointer

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2;
    int *aptr;
    cout<<aptr<<endl; //reference: address of aptr
    cout<<*aptr<<endl;//dereference: value of aptr (garbadge value)
    aptr = &a;
    cout<<aptr<<"\n"; //address of a
    cout<<&a<<endl;// address of a
    cout<<*aptr<<endl; // value of a
    cout<<&aptr<<endl; // address of aptr
    int **q = &aptr;
    cout<<q<<endl;//address of aptr
    cout<<*q<<endl; // value of aptr or address of a
    cout<<**q<<endl; // value of a

}
