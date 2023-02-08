/* SOURCE HEADER
****************************************************************
   Date: Wednesday 2023-02-08-16.50.59
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//63. prime factorisation using seive
#include<bits/stdc++.h>
using namespace std;
const int mx = 200;
int primeCheck[mx];
int main()
{
    int n = 15;
//    cin>>n;
    int arr[n];
    for(int i = 2; i<=n; i++)
    {
        primeCheck[i] = i;
    }
    for(int i =2; i<=n; i++)
    {
        if(primeCheck[i] == i)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                if(primeCheck[j] == j)
                {
                    primeCheck[j] = i;
                }
            }

        }
    }

//    for(int i = 2; i<=n; i++)
//    {
//        cout<<primeCheck[i]<<" ";
//    }
//    cout<<endl;
//    cout<<endl;

    while(n!=1)
    {
        cout<<n<<endl;
        cout<<primeCheck[n]<<endl;
        n=n/primeCheck[n];
    }
    return 0;
}
