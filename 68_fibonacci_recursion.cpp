/* SOURCE HEADER
****************************************************************
   Date: Thursday 2023-02-16-14.27.45
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//68. print nth fibonacci number by recursion
#include<bits/stdc++.h>
using namespace std;

int fibo (int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n ;
    cin>>n;
    cout<<fibo(n);

    return 0;
}
