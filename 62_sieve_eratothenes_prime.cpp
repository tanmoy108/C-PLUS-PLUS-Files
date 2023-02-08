/* SOURCE HEADER
****************************************************************
   Date: Wednesday 2023-02-08-14.59.47
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//62. write a program to find all prime numbers upto n
#include<bits/stdc++.h>
using namespace std;
const int mx = 200;
int primeCheck[mx];
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int primeCheck[mx] = {0};

    for(int i = 2;i<=n;i++)
    {
        if(primeCheck[i] == 0)
        {
            for(int j = i*i;j<=n;j+=i)
            {
                primeCheck[j] = 1;
            }
        }
    }
    for(int i = 2;i<=n;i++)
    {
        if(primeCheck[i] == 0)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
