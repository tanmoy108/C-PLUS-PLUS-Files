/* SOURCE HEADER
****************************************************************
   Date: Tuesday 2023-02-07-19.50.23
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//59. to check if a given number is power of 2 . 

#include<bits/stdc++.h>
using namespace std;

int ispowerof2(int n)
{
    return (n&&!(n&n-1));
}

int main()
{
    int n;
    cin>>n;
    int a = ispowerof2(n);
    if(a)
    {
        cout<<"YES";
    }
    else cout<<"NO";

    return 0;
}
