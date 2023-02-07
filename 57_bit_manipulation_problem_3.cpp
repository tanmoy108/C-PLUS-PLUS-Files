//57. clear bit . clear bit means set 0 on ith position

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5; // 0101
    int i = 2;
    int a = n&(~(1<<i));// 0101 & 1011  <=(~0100)
    cout<<a; // 1=0001
}

