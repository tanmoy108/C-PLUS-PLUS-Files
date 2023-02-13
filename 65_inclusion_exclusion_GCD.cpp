/* SOURCE HEADER
****************************************************************
   Date: Saturday 2023-02-11-14.17.21
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//  65. Euclid Algorithm to find GCD (inlcusion and exclusion principle)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b>a)
    {
        swap(a,b);
    }
    int c = a%b;

    while(c!=0)
    {
        a = b;
        b = c;
        c = a%b;
    }
    if(c==0)
    {
        cout<<b;
    }

    return 0;
}
