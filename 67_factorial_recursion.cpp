/* SOURCE HEADER
****************************************************************
   Date: Monday 2023-02-13-13.39.53
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/
//67. find the factorial of a number n in recursive way
#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int n;
    cin>>n;

    cout<<factorial(n);

    return 0;
}
