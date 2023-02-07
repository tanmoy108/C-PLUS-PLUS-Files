//Set Bit. set 1 on ith position.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5; // 0101
    int i = 1;
    int a = (n|(1<<i));// 0101 | 0010
    cout<<a; // 7=0111
}
