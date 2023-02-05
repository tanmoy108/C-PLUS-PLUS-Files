/*55. Get Bit - Bit Manipulation
n = 5(0101) suppose we need to get bit at position, i = 2 
if in index 2 ,bit = 1 print 1 else 0. 
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5; // 0101
    int i = 2;
    if((n&(1<<i))!=0) // 0101 & 0100
        cout<<1;
    else
        cout<<0;

}
