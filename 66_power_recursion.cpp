/* SOURCE HEADER
****************************************************************
   Date: Monday 2023-02-13-12.35.09
   Author: Tanmoy Sharma
   Contact:
      Mail: tanmoysharma46@gmail.com
      github: https://github.com/tanmoy108
****************************************************************
*/

//66. find n raised to power of p in recursive way
#include<bits/stdc++.h>
using namespace std;

int recursive_power(int n, int p)
{
    if(p == 0)
        return 1;
    int previousMultiple = recursive_power(n, p-1);

    return n*previousMultiple;

}

int main()
{
    int n,p;
    cin>>n>>p;

    cout<<recursive_power(n,p);

    return 0;
}
